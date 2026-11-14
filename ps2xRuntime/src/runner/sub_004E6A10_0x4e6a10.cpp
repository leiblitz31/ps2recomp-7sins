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

// Function: sub_004E6A10
// Address: 0x4e6a10 - 0x4e6a28
void sub_004E6A10_0x4e6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A10_0x4e6a10");
#endif

    ctx->pc = 0x4e6a10u;

    // 0x4e6a10: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6a10u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6A10 raw=0x465F474D");
    // 0x4e6a14: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6a14u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6A14 raw=0x74686769");
    // 0x4e6a18: 0x646f445f  daddiu      $t7, $v1, 0x445F
    ctx->pc = 0x4e6a18u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17503);
    // 0x4e6a1c: 0x74536567  .word       0x74536567                   # INVALID     $v0, $s3, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6a1cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6A1C raw=0x74536567");
    // 0x4e6a20: 0x747261  .word       0x00747261                   # addu        $t6, $v1, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6a20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4e6a24: 0x0  nop
    ctx->pc = 0x4e6a24u;
    // NOP
    ctx->pc = 0x4e6a28u;
}
