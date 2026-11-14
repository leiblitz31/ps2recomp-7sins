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

// Function: sub_004E2E58
// Address: 0x4e2e58 - 0x4e2e68
void sub_004E2E58_0x4e2e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2E58_0x4e2e58");
#endif

    ctx->pc = 0x4e2e58u;

    // 0x4e2e58: 0x7272696d  .word       0x7272696D                   # INVALID     $s3, $s2, 0x696D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2e58u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E2E58 raw=0x7272696D");
    // 0x4e2e5c: 0x755f726f  .word       0x755F726F                   # INVALID     $t2, $ra, 0x726F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2e5cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2E5C raw=0x755F726F");
    // 0x4e2e60: 0x685f76  tne         $v1, $t0, 381
    ctx->pc = 0x4e2e60u;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2e64: 0x0  nop
    ctx->pc = 0x4e2e64u;
    // NOP
    ctx->pc = 0x4e2e68u;
}
