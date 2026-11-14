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

// Function: sub_004E4C48
// Address: 0x4e4c48 - 0x4e4c60
void sub_004E4C48_0x4e4c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C48_0x4e4c48");
#endif

    ctx->pc = 0x4e4c48u;

    // 0x4e4c48: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4c4c: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4C4Cu;
    {
        const bool branch_taken_0x4e4c4c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4c4c) {
            ctx->pc = 0x4E4C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C4Cu;
            // 0x4e4c50: 0x4f4d5548  .word       0x4F4D5548                   # INVALID     $k0, $t5, 0x5548 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4C50 raw=0x4F4D5548");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5019CCu;
            return;
        }
    }
    ctx->pc = 0x4E4C54u;
    // 0x4e4c54: 0x5255  .word       0x00005255                   # INVALID     $zero, $zero, 0x5255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4c54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4E4C54 raw=0x00005255");
    // 0x4e4c58: 0x0  nop
    ctx->pc = 0x4e4c58u;
    // NOP
    // 0x4e4c5c: 0x0  nop
    ctx->pc = 0x4e4c5cu;
    // NOP
    ctx->pc = 0x4e4c60u;
}
