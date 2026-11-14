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

// Function: sub_004ECDB0
// Address: 0x4ecdb0 - 0x4ecdc8
void sub_004ECDB0_0x4ecdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECDB0_0x4ecdb0");
#endif

    ctx->pc = 0x4ecdb0u;

    // 0x4ecdb0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ecdb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ecdb4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ecdb4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ecdb8: 0x7463615c  .word       0x7463615C                   # INVALID     $v1, $v1, 0x615C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecdb8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECDB8 raw=0x7463615C");
    // 0x4ecdbc: 0x736e6f69  .word       0x736E6F69                   # INVALID     $k1, $t6, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4ecdbcu;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x4ECDBC raw=0x736E6F69");
    // 0x4ecdc0: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecdc0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4ECDC0 raw=0x0000005C");
    // 0x4ecdc4: 0x0  nop
    ctx->pc = 0x4ecdc4u;
    // NOP
    ctx->pc = 0x4ecdc8u;
}
