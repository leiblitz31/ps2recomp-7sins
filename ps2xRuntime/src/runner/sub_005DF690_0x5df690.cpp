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

// Function: sub_005DF690
// Address: 0x5df690 - 0x5df6c0
void sub_005DF690_0x5df690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF690_0x5df690");
#endif

    switch (ctx->pc) {
        case 0x5df69cu: goto label_5df69c;
        default: break;
    }

    ctx->pc = 0x5df690u;

    // 0x5df690: 0x2074754f  addi        $s4, $v1, 0x754F
    ctx->pc = 0x5df690u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30031, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5df694: 0x4d20666f  .word       0x4D20666F                   # INVALID     $t1, $zero, 0x666F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df694u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF694 raw=0x4D20666F");
    // 0x5df698: 0x3a206d65  xori        $zero, $s1, 0x6D65
    ctx->pc = 0x5df698u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28005);
label_5df69c:
    // 0x5df69c: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x5df69cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df6a0: 0x616d6572  daddi       $t5, $t3, 0x6572
    ctx->pc = 0x5df6a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x5df6a4: 0x6e696e69  ldr         $t1, 0x6E69($s3)
    ctx->pc = 0x5df6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df6a8: 0x202d2067  addi        $t5, $at, 0x2067
    ctx->pc = 0x5df6a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x5df6ac: 0x72206425  .word       0x72206425                   # INVALID     $s1, $zero, 0x6425 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df6acu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DF6AC raw=0x72206425");
    // 0x5df6b0: 0x65757165  daddiu      $s5, $t3, 0x7165
    ctx->pc = 0x5df6b0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29029);
    // 0x5df6b4: 0x64657473  daddiu      $a1, $v1, 0x7473
    ctx->pc = 0x5df6b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29811);
    // 0x5df6b8: 0x0  nop
    ctx->pc = 0x5df6b8u;
    // NOP
    // 0x5df6bc: 0x0  nop
    ctx->pc = 0x5df6bcu;
    // NOP
    ctx->pc = 0x5df6c0u;
}
