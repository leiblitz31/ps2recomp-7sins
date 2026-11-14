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

// Function: sub_004ED1B8
// Address: 0x4ed1b8 - 0x4ed1c8
void sub_004ED1B8_0x4ed1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED1B8_0x4ed1b8");
#endif

    ctx->pc = 0x4ed1b8u;

    // 0x4ed1b8: 0x4f2e7866  .word       0x4F2E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed1b8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4ED1B8 raw=0x4F2E7866");
    // 0x4ed1bc: 0x65736666  daddiu      $s3, $t3, 0x6666
    ctx->pc = 0x4ed1bcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26214);
    // 0x4ed1c0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4ed1c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed1c4: 0x0  nop
    ctx->pc = 0x4ed1c4u;
    // NOP
    ctx->pc = 0x4ed1c8u;
}
