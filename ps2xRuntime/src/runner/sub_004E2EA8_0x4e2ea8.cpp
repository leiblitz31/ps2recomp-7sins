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

// Function: sub_004E2EA8
// Address: 0x4e2ea8 - 0x4e2eb8
void sub_004E2EA8_0x4e2ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2EA8_0x4e2ea8");
#endif

    ctx->pc = 0x4e2ea8u;

    // 0x4e2ea8: 0x746e6f66  .word       0x746E6F66                   # INVALID     $v1, $t6, 0x6F66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2ea8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2EA8 raw=0x746E6F66");
    // 0x4e2eac: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x4e2eacu;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
    // 0x4e2eb0: 0x0  nop
    ctx->pc = 0x4e2eb0u;
    // NOP
    // 0x4e2eb4: 0x0  nop
    ctx->pc = 0x4e2eb4u;
    // NOP
    ctx->pc = 0x4e2eb8u;
}
