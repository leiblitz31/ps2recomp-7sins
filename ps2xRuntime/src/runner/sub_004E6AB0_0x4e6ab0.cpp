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

// Function: sub_004E6AB0
// Address: 0x4e6ab0 - 0x4e6ac8
void sub_004E6AB0_0x4e6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6AB0_0x4e6ab0");
#endif

    ctx->pc = 0x4e6ab0u;

    // 0x4e6ab0: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6ab0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6AB0 raw=0x465F474D");
    // 0x4e6ab4: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ab4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6AB4 raw=0x74686769");
    // 0x4e6ab8: 0x75505f32  .word       0x75505F32                   # INVALID     $t2, $s0, 0x5F32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ab8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6AB8 raw=0x75505F32");
    // 0x4e6abc: 0x6268636e  daddi       $t0, $s3, 0x636E
    ctx->pc = 0x4e6abcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25454; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x4e6ac0: 0x6b6361  .word       0x006B6361                   # addu        $t4, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6ac0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4e6ac4: 0x0  nop
    ctx->pc = 0x4e6ac4u;
    // NOP
    ctx->pc = 0x4e6ac8u;
}
