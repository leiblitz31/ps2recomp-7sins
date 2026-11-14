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

// Function: sub_004E4F30
// Address: 0x4e4f30 - 0x4e4f48
void sub_004E4F30_0x4e4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F30_0x4e4f30");
#endif

    switch (ctx->pc) {
        case 0x4e4f40u: goto label_4e4f40;
        default: break;
    }

    ctx->pc = 0x4e4f30u;

    // 0x4e4f30: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4F30u;
    {
        const bool branch_taken_0x4e4f30 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4f30) {
            ctx->pc = 0x4E4F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4F30u;
            // 0x4e4f34: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5000F4u;
            return;
        }
    }
    ctx->pc = 0x4E4F38u;
    // 0x4e4f38: 0x6f69765f  ldr         $t1, 0x765F($k1)
    ctx->pc = 0x4e4f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4f3c: 0x636e656c  daddi       $t6, $k1, 0x656C
    ctx->pc = 0x4e4f3cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_4e4f40:
    // 0x4e4f40: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4f40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4f44: 0x0  nop
    ctx->pc = 0x4e4f44u;
    // NOP
    ctx->pc = 0x4e4f48u;
}
