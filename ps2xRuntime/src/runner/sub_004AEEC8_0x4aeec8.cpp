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

// Function: sub_004AEEC8
// Address: 0x4aeec8 - 0x4aef48
void sub_004AEEC8_0x4aeec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEEC8_0x4aeec8");
#endif

    switch (ctx->pc) {
        case 0x4aef34u: goto label_4aef34;
        case 0x4aef3cu: goto label_4aef3c;
        default: break;
    }

    ctx->pc = 0x4aeec8u;

    // 0x4aeec8: 0x8f83b8cc  lw          $v1, -0x4734($gp)
    ctx->pc = 0x4aeec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949068)));
    // 0x4aeecc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aeeccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aeed0: 0x8f82b8d0  lw          $v0, -0x4730($gp)
    ctx->pc = 0x4aeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x4aeed4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4aeed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aeed8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x4aeed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x4aeedc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4aeedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4aeee0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4AEEE0u;
    {
        const bool branch_taken_0x4aeee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEEE0u;
        // 0x4aeee4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aeee0) {
            ctx->pc = 0x4AEF3Cu;
            goto label_4aef3c;
        }
    }
    ctx->pc = 0x4AEEE8u;
    // 0x4aeee8: 0x8f84b8d0  lw          $a0, -0x4730($gp)
    ctx->pc = 0x4aeee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x4aeeec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4aeeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4aeef0: 0x8f85b8d0  lw          $a1, -0x4730($gp)
    ctx->pc = 0x4aeef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949072)));
    // 0x4aeef4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4aeef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x4aeef8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x4aeef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4aeefc: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x4aeefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x4aef00: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4aef00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4aef04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4aef04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4aef08: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x4aef08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x4aef0c: 0xaf85b8d0  sw          $a1, -0x4730($gp)
    ctx->pc = 0x4aef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949072), GPR_U32(ctx, 5));
    // 0x4aef10: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4aef10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4aef14: 0x24e799c0  addiu       $a3, $a3, -0x6640
    ctx->pc = 0x4aef14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941120));
    // 0x4aef18: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4aef18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4aef1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4aef1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aef20: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4aef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4aef24: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x4aef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4aef28: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4aef28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4aef2c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4AEF2Cu;
    SET_GPR_U32(ctx, 31, 0x4AEF34u);
    ctx->pc = 0x4AEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEF2Cu;
    // 0x4aef30: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4AEF2Cu, 0x4AEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEF34u;
label_4aef34:
    // 0x4aef34: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x4AEF34u;
    SET_GPR_U32(ctx, 31, 0x4AEF3Cu);
    ctx->pc = 0x4AEF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEF34u;
    // 0x4aef38: 0x8f84c240  lw          $a0, -0x3DC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x4AEF34u, 0x4AEF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEF3Cu;
label_4aef3c:
    // 0x4aef3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aef3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aef40: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEF40u;
        // 0x4aef44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEF48u;
}
