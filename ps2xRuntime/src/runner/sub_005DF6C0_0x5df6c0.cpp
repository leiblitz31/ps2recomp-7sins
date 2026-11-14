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

// Function: sub_005DF6C0
// Address: 0x5df6c0 - 0x5df6f0
void sub_005DF6C0_0x5df6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF6C0_0x5df6c0");
#endif

    switch (ctx->pc) {
        case 0x5df6c4u: goto label_5df6c4;
        default: break;
    }

    ctx->pc = 0x5df6c0u;

    // 0x5df6c0: 0x20756f59  addi        $s5, $v1, 0x6F59
    ctx->pc = 0x5df6c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28505, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_5df6c4:
    // 0x5df6c4: 0x20657261  addi        $a1, $v1, 0x7261
    ctx->pc = 0x5df6c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5df6c8: 0x656c6572  daddiu      $t4, $t3, 0x6572
    ctx->pc = 0x5df6c8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
    // 0x5df6cc: 0x6e697361  ldr         $t1, 0x7361($s3)
    ctx->pc = 0x5df6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29537); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df6d0: 0x20612067  addi        $at, $v1, 0x2067
    ctx->pc = 0x5df6d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x5df6d4: 0x76657270  .word       0x76657270                   # INVALID     $s3, $a1, 0x7270 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df6d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF6D4 raw=0x76657270");
    // 0x5df6d8: 0x73756f69  .word       0x73756F69                   # INVALID     $k1, $s5, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5df6d8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x5DF6D8 raw=0x73756F69");
    // 0x5df6dc: 0x7220796c  .word       0x7220796C                   # INVALID     $s1, $zero, 0x796C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df6dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5DF6DC raw=0x7220796C");
    // 0x5df6e0: 0x61656c65  daddi       $a1, $t3, 0x6C65
    ctx->pc = 0x5df6e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5df6e4: 0x20646573  addi        $a0, $v1, 0x6573
    ctx->pc = 0x5df6e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df6e8: 0x636f6c62  daddi       $t7, $k1, 0x6C62
    ctx->pc = 0x5df6e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27746; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x5df6ec: 0xa6b  .word       0x00000A6B                   # sltu        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df6ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    ctx->pc = 0x5df6f0u;
}
