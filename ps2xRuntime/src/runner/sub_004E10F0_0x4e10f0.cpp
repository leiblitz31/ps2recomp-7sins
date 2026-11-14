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

// Function: sub_004E10F0
// Address: 0x4e10f0 - 0x4e1118
void sub_004E10F0_0x4e10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E10F0_0x4e10f0");
#endif

    ctx->pc = 0x4e10f0u;

    // 0x4e10f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e10f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e10f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e10f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e10f8: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e10f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E10F8 raw=0x7469625C");
    // 0x4e10fc: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e10fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E10FC raw=0x7370616D");
    // 0x4e1100: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e1100u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4e1104: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4e1104u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4e1108: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4e1108u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4e110c: 0x72705c73  .word       0x72705C73                   # INVALID     $s3, $s0, 0x5C73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e110cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E110C raw=0x72705C73");
    // 0x4e1110: 0x73797374  .word       0x73797374                   # psllh       $t6, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1110u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
    // 0x4e1114: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1114u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E1114 raw=0x0000005C");
    ctx->pc = 0x4e1118u;
}
