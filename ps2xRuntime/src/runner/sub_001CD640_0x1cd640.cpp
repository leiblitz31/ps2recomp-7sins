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

// Function: sub_001CD640
// Address: 0x1cd640 - 0x1cd760
void sub_001CD640_0x1cd640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD640_0x1cd640");
#endif

    switch (ctx->pc) {
        case 0x1cd66cu: goto label_1cd66c;
        case 0x1cd67cu: goto label_1cd67c;
        case 0x1cd68cu: goto label_1cd68c;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd704u: goto label_1cd704;
        case 0x1cd718u: goto label_1cd718;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd74cu: goto label_1cd74c;
        default: break;
    }

    ctx->pc = 0x1cd640u;

    // 0x1cd640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd64c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cd64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1cd650: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x1cd650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
    // 0x1cd654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cd658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1cd65c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd660: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1cd664: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1CD664u;
    SET_GPR_U32(ctx, 31, 0x1CD66Cu);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1CD664u, 0x1CD66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD66Cu;
label_1cd66c:
    // 0x1cd66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd670: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1cd670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1cd674: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x1CD674u;
    SET_GPR_U32(ctx, 31, 0x1CD67Cu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1CD674u, 0x1CD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD67Cu;
label_1cd67c:
    // 0x1cd67c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd680: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1cd680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1cd684: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1CD684u;
    SET_GPR_U32(ctx, 31, 0x1CD68Cu);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1CD684u, 0x1CD68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD68Cu;
label_1cd68c:
    // 0x1cd68c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd690: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1cd690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cd694: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x1CD694u;
    SET_GPR_U32(ctx, 31, 0x1CD69Cu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1CD694u, 0x1CD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD69Cu;
label_1cd69c:
    // 0x1cd69c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd6a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1cd6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD6B0u;
    // 0x1cd6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cd6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd6b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1cd6bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1cd6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cd6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd6c4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CD6C4u;
    {
        const bool branch_taken_0x1cd6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd6c4) {
            ctx->pc = 0x1CD74Cu;
            goto label_1cd74c;
        }
    }
    ctx->pc = 0x1CD6CCu;
    // 0x1cd6cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1cd6d0: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x1cd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
    // 0x1cd6d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd6d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1cd6dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd6e0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1cd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cd6e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd6e8: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x1CD6E8u;
    SET_GPR_U32(ctx, 31, 0x1CD6F0u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1CD6E8u, 0x1CD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD6F0u;
label_1cd6f0:
    // 0x1cd6f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd6f4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1cd6f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd6fc: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1CD6FCu;
    SET_GPR_U32(ctx, 31, 0x1CD704u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1CD6FCu, 0x1CD704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD704u;
label_1cd704:
    // 0x1cd704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd708: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1cd708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1cd70c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cd70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd710: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x1CD710u;
    SET_GPR_U32(ctx, 31, 0x1CD718u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1CD710u, 0x1CD718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD718u;
label_1cd718:
    // 0x1cd718: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd71c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1cd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1cd720: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd724: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1CD724u;
    SET_GPR_U32(ctx, 31, 0x1CD72Cu);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1CD724u, 0x1CD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD72Cu;
label_1cd72c:
    // 0x1cd72c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1cd72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd730: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1cd730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cd734: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cd734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cd738: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD738u;
    {
        const bool branch_taken_0x1cd738 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cd738) {
            ctx->pc = 0x1CD74Cu;
            goto label_1cd74c;
        }
    }
    ctx->pc = 0x1CD740u;
    // 0x1cd740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cd740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd744: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1CD744u;
    SET_GPR_U32(ctx, 31, 0x1CD74Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1CD744u, 0x1CD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD74Cu;
label_1cd74c:
    // 0x1cd74c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd754: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd758: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD760u;
}
