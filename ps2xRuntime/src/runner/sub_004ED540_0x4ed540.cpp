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

// Function: sub_004ED540
// Address: 0x4ed540 - 0x4ed558
void sub_004ED540_0x4ed540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED540_0x4ed540");
#endif

    ctx->pc = 0x4ed540u;

    // 0x4ed540: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed540u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed544: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed544u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed548: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed548u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED548 raw=0x7469625C");
    // 0x4ed54c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed54cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED54C raw=0x7370616D");
    // 0x4ed550: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed550u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed554: 0x0  nop
    ctx->pc = 0x4ed554u;
    // NOP
    ctx->pc = 0x4ed558u;
}
