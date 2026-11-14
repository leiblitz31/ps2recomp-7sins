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

// Function: sub_004E6A28
// Address: 0x4e6a28 - 0x4e6a40
void sub_004E6A28_0x4e6a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A28_0x4e6a28");
#endif

    ctx->pc = 0x4e6a28u;

    // 0x4e6a28: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6a28u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6A28 raw=0x465F474D");
    // 0x4e6a2c: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6a2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6A2C raw=0x74686769");
    // 0x4e6a30: 0x646f445f  daddiu      $t7, $v1, 0x445F
    ctx->pc = 0x4e6a30u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17503);
    // 0x4e6a34: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6a34u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
    // 0x4e6a38: 0x0  nop
    ctx->pc = 0x4e6a38u;
    // NOP
    // 0x4e6a3c: 0x0  nop
    ctx->pc = 0x4e6a3cu;
    // NOP
    ctx->pc = 0x4e6a40u;
}
