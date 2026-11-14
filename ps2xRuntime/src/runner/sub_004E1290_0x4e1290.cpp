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

// Function: sub_004E1290
// Address: 0x4e1290 - 0x4e12c0
void sub_004E1290_0x4e1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1290_0x4e1290");
#endif

    ctx->pc = 0x4e1290u;

    // 0x4e1290: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e1290u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e1294: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e1294u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e1298: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1298u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E1298 raw=0x7469625C");
    // 0x4e129c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e129cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E129C raw=0x7370616D");
    // 0x4e12a0: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e12a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4e12a4: 0x7263735c  .word       0x7263735C                   # INVALID     $s3, $v1, 0x735C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e12a4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1C at 0x4E12A4 raw=0x7263735C");
    // 0x4e12a8: 0x736e6565  .word       0x736E6565                   # INVALID     $k1, $t6, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e12a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E12A8 raw=0x736E6565");
    // 0x4e12ac: 0x746e695c  .word       0x746E695C                   # INVALID     $v1, $t6, 0x695C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e12acu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E12AC raw=0x746E695C");
    // 0x4e12b0: 0x375f6f72  ori         $ra, $k0, 0x6F72
    ctx->pc = 0x4e12b0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)28530);
    // 0x4e12b4: 0x736e6973  .word       0x736E6973                   # INVALID     $k1, $t6, 0x6973 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e12b4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E12B4 raw=0x736E6973");
    // 0x4e12b8: 0x676e702e  daddiu      $t6, $k1, 0x702E
    ctx->pc = 0x4e12b8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28718);
    // 0x4e12bc: 0x0  nop
    ctx->pc = 0x4e12bcu;
    // NOP
    ctx->pc = 0x4e12c0u;
}
