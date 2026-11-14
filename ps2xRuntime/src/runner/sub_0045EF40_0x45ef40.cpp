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

// Function: sub_0045EF40
// Address: 0x45ef40 - 0x45ef70
void sub_0045EF40_0x45ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EF40_0x45ef40");
#endif

    ctx->pc = 0x45ef40u;

    // 0x45ef40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x45ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45ef44: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45ef48: 0xac644dd8  sw          $a0, 0x4DD8($v1)
    ctx->pc = 0x45ef48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x624DD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624DD8u, _value); } while (0);
    // 0x45ef4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x45ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45ef50: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45ef54: 0xac644de0  sw          $a0, 0x4DE0($v1)
    ctx->pc = 0x45ef54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x624DE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624DE0u, _value); } while (0);
    // 0x45ef58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x45ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45ef5c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45ef60: 0xac644ddc  sw          $a0, 0x4DDC($v1)
    ctx->pc = 0x45ef60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x624DDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x624DDCu, _value); } while (0);
    // 0x45ef64: 0x3e00008  jr          $ra
    ctx->pc = 0x45EF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EF6Cu;
    // 0x45ef6c: 0x0  nop
    ctx->pc = 0x45ef6cu;
    // NOP
    ctx->pc = 0x45ef70u;
}
