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

// Function: sub_005E0070
// Address: 0x5e0070 - 0x5e00b0
void sub_005E0070_0x5e0070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0070_0x5e0070");
#endif

    ctx->pc = 0x5e0070u;

    // 0x5e0070: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0070u;
    {
        const bool branch_taken_0x5e0070 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0070) {
            ctx->pc = 0x5E0074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0070u;
            // 0x5e0074: 0x3a443274  xori        $a0, $s2, 0x3274 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)12916);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD204u;
            return;
        }
    }
    ctx->pc = 0x5E0078u;
    // 0x5e0078: 0x7365443a  .word       0x7365443A                   # INVALID     $k1, $a1, 0x443A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5e0078u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5E0078 raw=0x7365443A");
    // 0x5e007c: 0x796f7274  lq          $t7, 0x7274($t3)
    ctx->pc = 0x5e007cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 11), 29300)));
    // 0x5e0080: 0x746e6f46  .word       0x746E6F46                   # INVALID     $v1, $t6, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0080u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0080 raw=0x746E6F46");
    // 0x5e0084: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0084u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
    // 0x5e0088: 0x746f6720  .word       0x746F6720                   # INVALID     $v1, $t7, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0088u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5E0088 raw=0x746F6720");
    // 0x5e008c: 0x4e206120  .word       0x4E206120                   # INVALID     $s1, $zero, 0x6120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e008cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E008C raw=0x4E206120");
    // 0x5e0090: 0x204c4c55  addi        $t4, $v0, 0x4C55
    ctx->pc = 0x5e0090u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5e0094: 0x61726170  daddi       $s2, $t3, 0x6170
    ctx->pc = 0x5e0094u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24944; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5e0098: 0x6f70206d  ldr         $s0, 0x206D($k1)
    ctx->pc = 0x5e0098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x5e009c: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5e009cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
    // 0x5e00a0: 0xa2e72  tlt         $zero, $t2, 185
    ctx->pc = 0x5e00a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x5e00a4: 0x0  nop
    ctx->pc = 0x5e00a4u;
    // NOP
    // 0x5e00a8: 0x0  nop
    ctx->pc = 0x5e00a8u;
    // NOP
    // 0x5e00ac: 0x0  nop
    ctx->pc = 0x5e00acu;
    // NOP
    ctx->pc = 0x5e00b0u;
}
