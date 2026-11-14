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

// Function: sub_004ED790
// Address: 0x4ed790 - 0x4ed7c0
void sub_004ED790_0x4ed790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED790_0x4ed790");
#endif

    ctx->pc = 0x4ed790u;

    // 0x4ed790: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed790u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed794: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed794u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed798: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed798u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED798 raw=0x7469625C");
    // 0x4ed79c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed79cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED79C raw=0x7370616D");
    // 0x4ed7a0: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed7a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed7a4: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed7a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed7a8: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed7a8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed7ac: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4ed7acu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed7b0: 0x609290  .word       0x00609290                   # mfhi        $s2 # 00600280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed7b0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x4ed7b4: 0x609298  .word       0x00609298                   # mult        $s2, $v1, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ed7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x4ed7b8: 0x6092a0  .word       0x006092A0                   # add         $s2, $v1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed7b8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x4ed7bc: 0x0  nop
    ctx->pc = 0x4ed7bcu;
    // NOP
    ctx->pc = 0x4ed7c0u;
}
