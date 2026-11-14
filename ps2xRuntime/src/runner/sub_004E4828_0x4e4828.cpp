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

// Function: sub_004E4828
// Address: 0x4e4828 - 0x4e4838
void sub_004E4828_0x4e4828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4828_0x4e4828");
#endif

    ctx->pc = 0x4e4828u;

    // 0x4e4828: 0x4d534d26  .word       0x4D534D26                   # INVALID     $t2, $s3, 0x4D26 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4828u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4828 raw=0x4D534D26");
    // 0x4e482c: 0x656e5f42  daddiu      $t6, $t3, 0x5F42
    ctx->pc = 0x4e482cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24386);
    // 0x4e4830: 0x74637478  .word       0x74637478                   # INVALID     $v1, $v1, 0x7478 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4830u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4830 raw=0x74637478");
    // 0x4e4834: 0x0  nop
    ctx->pc = 0x4e4834u;
    // NOP
    ctx->pc = 0x4e4838u;
}
