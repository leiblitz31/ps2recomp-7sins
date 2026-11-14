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

// Function: sub_004ED180
// Address: 0x4ed180 - 0x4ed198
void sub_004ED180_0x4ed180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED180_0x4ed180");
#endif

    ctx->pc = 0x4ed180u;

    // 0x4ed180: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed180u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED180 raw=0x7478656E");
    // 0x4ed184: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4ed184u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x4ed188: 0x746e656c  .word       0x746E656C                   # INVALID     $v1, $t6, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed188u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED188 raw=0x746E656C");
    // 0x4ed18c: 0x636e6172  daddi       $t6, $k1, 0x6172
    ctx->pc = 0x4ed18cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ed190: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed190u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed194: 0x0  nop
    ctx->pc = 0x4ed194u;
    // NOP
    ctx->pc = 0x4ed198u;
}
