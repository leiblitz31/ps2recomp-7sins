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

// Function: sub_004E48D0
// Address: 0x4e48d0 - 0x4e48e0
void sub_004E48D0_0x4e48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E48D0_0x4e48d0");
#endif

    ctx->pc = 0x4e48d0u;

    // 0x4e48d0: 0x725f6270  .word       0x725F6270                   # INVALID     $s2, $ra, 0x6270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e48d0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E48D0 raw=0x725F6270");
    // 0x4e48d4: 0x705f6c65  .word       0x705F6C65                   # INVALID     $v0, $ra, 0x6C65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e48d4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E48D4 raw=0x705F6C65");
    // 0x4e48d8: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e48d8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x4e48dc: 0x0  nop
    ctx->pc = 0x4e48dcu;
    // NOP
    ctx->pc = 0x4e48e0u;
}
