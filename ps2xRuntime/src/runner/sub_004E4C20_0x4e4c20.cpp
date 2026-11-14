#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4C20
// Address: 0x4e4c20 - 0x4e4c38
void sub_004E4C20_0x4e4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C20_0x4e4c20");
#endif

    ctx->pc = 0x4e4c20u;

    // 0x4e4c20: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4c24: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4C24u;
    {
        const bool branch_taken_0x4e4c24 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4c24) {
            ctx->pc = 0x4E4C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C24u;
            // 0x4e4c28: 0x47415246  .word       0x47415246                   # INVALID     $k0, $at, 0x5246 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x6 at 0x4E4C28 raw=0x47415246");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5019A4u;
            return;
        }
    }
    ctx->pc = 0x4E4C2Cu;
    // 0x4e4c2c: 0x54494c49  bnel        $v0, $t1, . + 4 + (0x4C49 << 2)
    ctx->pc = 0x4E4C2Cu;
    {
        const bool branch_taken_0x4e4c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x4e4c2c) {
            ctx->pc = 0x4E4C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C2Cu;
            // 0x4e4c30: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E4C30 raw=0x00000045");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7D54u;
            return;
        }
    }
    ctx->pc = 0x4E4C34u;
    // 0x4e4c34: 0x0  nop
    ctx->pc = 0x4e4c34u;
    // NOP
    ctx->pc = 0x4e4c38u;
}
