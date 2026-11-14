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

// Function: sub_004E2E68
// Address: 0x4e2e68 - 0x4e2e78
void sub_004E2E68_0x4e2e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2E68_0x4e2e68");
#endif

    ctx->pc = 0x4e2e68u;

    // 0x4e2e68: 0x7272696d  .word       0x7272696D                   # INVALID     $s3, $s2, 0x696D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2e68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E2E68 raw=0x7272696D");
    // 0x4e2e6c: 0x755f726f  .word       0x755F726F                   # INVALID     $t2, $ra, 0x726F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2e6cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2E6C raw=0x755F726F");
    // 0x4e2e70: 0x765f76  tne         $v1, $s6, 381
    ctx->pc = 0x4e2e70u;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2e74: 0x0  nop
    ctx->pc = 0x4e2e74u;
    // NOP
    ctx->pc = 0x4e2e78u;
}
