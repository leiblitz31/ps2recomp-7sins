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

// Function: sub_004ED7C0
// Address: 0x4ed7c0 - 0x4ed7f0
void sub_004ED7C0_0x4ed7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED7C0_0x4ed7c0");
#endif

    ctx->pc = 0x4ed7c0u;

    // 0x4ed7c0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed7c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed7c4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed7c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed7c8: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed7c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED7C8 raw=0x7469625C");
    // 0x4ed7cc: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed7ccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED7CC raw=0x7370616D");
    // 0x4ed7d0: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed7d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed7d4: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed7d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed7d8: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed7d8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed7dc: 0x73255c73  .word       0x73255C73                   # INVALID     $t9, $a1, 0x5C73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed7dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4ED7DC raw=0x73255C73");
    // 0x4ed7e0: 0x0  nop
    ctx->pc = 0x4ed7e0u;
    // NOP
    // 0x4ed7e4: 0x0  nop
    ctx->pc = 0x4ed7e4u;
    // NOP
    // 0x4ed7e8: 0x0  nop
    ctx->pc = 0x4ed7e8u;
    // NOP
    // 0x4ed7ec: 0x0  nop
    ctx->pc = 0x4ed7ecu;
    // NOP
    ctx->pc = 0x4ed7f0u;
}
