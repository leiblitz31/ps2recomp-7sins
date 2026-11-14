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

// Function: sub_005DFC50
// Address: 0x5dfc50 - 0x5dfc80
void sub_005DFC50_0x5dfc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFC50_0x5dfc50");
#endif

    ctx->pc = 0x5dfc50u;

    // 0x5dfc50: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DFC50u;
    {
        const bool branch_taken_0x5dfc50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5dfc50) {
            ctx->pc = 0x5DFC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFC50u;
            // 0x5dfc54: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCDE4u;
            return;
        }
    }
    ctx->pc = 0x5DFC58u;
    // 0x5dfc58: 0x6572433a  daddiu      $s2, $t3, 0x433A
    ctx->pc = 0x5dfc58u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17210);
    // 0x5dfc5c: 0x42657461  .word       0x42657461                   # INVALID     $s3, $a1, 0x7461 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfc5cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFC5C raw=0x42657461");
    // 0x5dfc60: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfc64: 0x67203a20  daddiu      $zero, $t9, 0x3A20
    ctx->pc = 0x5dfc64u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)14880);
    // 0x5dfc68: 0x6120746f  daddi       $zero, $t1, 0x746F
    ctx->pc = 0x5dfc68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dfc6c: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc6cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFC6C raw=0x4C554E20");
    // 0x5dfc70: 0x6170204c  daddi       $s0, $t3, 0x204C
    ctx->pc = 0x5dfc70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8268; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
    // 0x5dfc74: 0x206d6172  addi        $t5, $v1, 0x6172
    ctx->pc = 0x5dfc74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24946, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x5dfc78: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x5dfc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfc7c: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5dfc7cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x5dfc80u;
}
