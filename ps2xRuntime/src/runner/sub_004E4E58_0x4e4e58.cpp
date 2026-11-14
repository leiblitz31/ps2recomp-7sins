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

// Function: sub_004E4E58
// Address: 0x4e4e58 - 0x4e4e68
void sub_004E4E58_0x4e4e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E58_0x4e4e58");
#endif

    switch (ctx->pc) {
        case 0x4e4e64u: goto label_4e4e64;
        default: break;
    }

    ctx->pc = 0x4e4e58u;

    // 0x4e4e58: 0x73697263  .word       0x73697263                   # INVALID     $k1, $t1, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e4e58u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E4E58 raw=0x73697263");
    // 0x4e4e5c: 0x665f7369  daddiu      $ra, $s2, 0x7369
    ctx->pc = 0x4e4e5cu;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)29545);
    // 0x4e4e60: 0x726165  .word       0x00726165                   # or          $t4, $v1, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4e60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_4e4e64:
    // 0x4e4e64: 0x0  nop
    ctx->pc = 0x4e4e64u;
    // NOP
    ctx->pc = 0x4e4e68u;
}
