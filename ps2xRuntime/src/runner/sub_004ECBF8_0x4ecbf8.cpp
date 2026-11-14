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

// Function: sub_004ECBF8
// Address: 0x4ecbf8 - 0x4ecc08
void sub_004ECBF8_0x4ecbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECBF8_0x4ecbf8");
#endif

    ctx->pc = 0x4ecbf8u;

    // 0x4ecbf8: 0x252c6425  addiu       $t4, $t1, 0x6425
    ctx->pc = 0x4ecbf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
    // 0x4ecbfc: 0x73253b64  .word       0x73253B64                   # INVALID     $t9, $a1, 0x3B64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecbfcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4ECBFC raw=0x73253B64");
    // 0x4ecc00: 0x0  nop
    ctx->pc = 0x4ecc00u;
    // NOP
    // 0x4ecc04: 0x0  nop
    ctx->pc = 0x4ecc04u;
    // NOP
    ctx->pc = 0x4ecc08u;
}
