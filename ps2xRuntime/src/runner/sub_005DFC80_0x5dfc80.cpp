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

// Function: sub_005DFC80
// Address: 0x5dfc80 - 0x5dfca0
void sub_005DFC80_0x5dfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFC80_0x5dfc80");
#endif

    switch (ctx->pc) {
        case 0x5dfc90u: goto label_5dfc90;
        default: break;
    }

    ctx->pc = 0x5dfc80u;

    // 0x5dfc80: 0x52705f6d  beql        $s3, $s0, . + 4 + (0x5F6D << 2)
    ctx->pc = 0x5DFC80u;
    {
        const bool branch_taken_0x5dfc80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x5dfc80) {
            ctx->pc = 0x5DFC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFC80u;
            // 0x5dfc84: 0x42643274  .word       0x42643274                   # INVALID     $s3, $a0, 0x3274 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFC84 raw=0x42643274");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F7A38u;
            return;
        }
    }
    ctx->pc = 0x5DFC88u;
    // 0x5dfc88: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfc8c: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5dfc8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5dfc90:
    // 0x5dfc90: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc90u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFC90 raw=0x4C4C554E");
    // 0x5dfc94: 0x0  nop
    ctx->pc = 0x5dfc94u;
    // NOP
    // 0x5dfc98: 0x0  nop
    ctx->pc = 0x5dfc98u;
    // NOP
    // 0x5dfc9c: 0x0  nop
    ctx->pc = 0x5dfc9cu;
    // NOP
    ctx->pc = 0x5dfca0u;
}
