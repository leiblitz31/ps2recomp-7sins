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

// Function: sub_004E6B30
// Address: 0x4e6b30 - 0x4e6b48
void sub_004E6B30_0x4e6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B30_0x4e6b30");
#endif

    ctx->pc = 0x4e6b30u;

    // 0x4e6b30: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6b30u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6B30 raw=0x465F474D");
    // 0x4e6b34: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b34u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6B34 raw=0x74686769");
    // 0x4e6b38: 0x75565f32  .word       0x75565F32                   # INVALID     $t2, $s6, 0x5F32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b38u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6B38 raw=0x75565F32");
    // 0x4e6b3c: 0x72656e6c  .word       0x72656E6C                   # INVALID     $s3, $a1, 0x6E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6b3cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E6B3C raw=0x72656E6C");
    // 0x4e6b40: 0x656c6261  daddiu      $t4, $t3, 0x6261
    ctx->pc = 0x4e6b40u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25185);
    // 0x4e6b44: 0x0  nop
    ctx->pc = 0x4e6b44u;
    // NOP
    ctx->pc = 0x4e6b48u;
}
