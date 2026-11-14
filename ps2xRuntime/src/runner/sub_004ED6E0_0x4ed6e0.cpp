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

// Function: sub_004ED6E0
// Address: 0x4ed6e0 - 0x4ed710
void sub_004ED6E0_0x4ed6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED6E0_0x4ed6e0");
#endif

    ctx->pc = 0x4ed6e0u;

    // 0x4ed6e0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed6e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed6e4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed6e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed6e8: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed6e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED6E8 raw=0x7469625C");
    // 0x4ed6ec: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed6ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED6EC raw=0x7370616D");
    // 0x4ed6f0: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed6f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed6f4: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed6f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed6f8: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed6f8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed6fc: 0x77785c73  .word       0x77785C73                   # INVALID     $k1, $t8, 0x5C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed6fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED6FC raw=0x77785C73");
    // 0x4ed700: 0x736c6c61  .word       0x736C6C61                   # maddu1      $t5, $k1, $t4 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed700u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 12); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4ed704: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed704u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4ED704 raw=0x0000005C");
    // 0x4ed708: 0x0  nop
    ctx->pc = 0x4ed708u;
    // NOP
    // 0x4ed70c: 0x0  nop
    ctx->pc = 0x4ed70cu;
    // NOP
    ctx->pc = 0x4ed710u;
}
