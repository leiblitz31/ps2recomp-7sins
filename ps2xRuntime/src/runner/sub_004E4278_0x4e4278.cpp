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

// Function: sub_004E4278
// Address: 0x4e4278 - 0x4e4288
void sub_004E4278_0x4e4278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4278_0x4e4278");
#endif

    ctx->pc = 0x4e4278u;

    // 0x4e4278: 0x25746c65  addiu       $s4, $t3, 0x6C65
    ctx->pc = 0x4e4278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), 27749));
    // 0x4e427c: 0x25643230  addiu       $a0, $t3, 0x3230
    ctx->pc = 0x4e427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 12848));
    // 0x4e4280: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4280u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4e4284: 0x0  nop
    ctx->pc = 0x4e4284u;
    // NOP
    ctx->pc = 0x4e4288u;
}
