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

// Function: sub_0040F6C0
// Address: 0x40f6c0 - 0x40f750
void sub_0040F6C0_0x40f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F6C0_0x40f6c0");
#endif

    switch (ctx->pc) {
        case 0x40f6c0u: goto label_40f6c0;
        case 0x40f6c4u: goto label_40f6c4;
        case 0x40f6c8u: goto label_40f6c8;
        case 0x40f6ccu: goto label_40f6cc;
        case 0x40f6d0u: goto label_40f6d0;
        case 0x40f6d4u: goto label_40f6d4;
        case 0x40f6d8u: goto label_40f6d8;
        case 0x40f6dcu: goto label_40f6dc;
        case 0x40f6e0u: goto label_40f6e0;
        case 0x40f6e4u: goto label_40f6e4;
        case 0x40f6e8u: goto label_40f6e8;
        case 0x40f6ecu: goto label_40f6ec;
        case 0x40f6f0u: goto label_40f6f0;
        case 0x40f6f4u: goto label_40f6f4;
        case 0x40f6f8u: goto label_40f6f8;
        case 0x40f6fcu: goto label_40f6fc;
        case 0x40f700u: goto label_40f700;
        case 0x40f704u: goto label_40f704;
        case 0x40f708u: goto label_40f708;
        case 0x40f70cu: goto label_40f70c;
        case 0x40f710u: goto label_40f710;
        case 0x40f714u: goto label_40f714;
        case 0x40f718u: goto label_40f718;
        case 0x40f71cu: goto label_40f71c;
        case 0x40f720u: goto label_40f720;
        case 0x40f724u: goto label_40f724;
        case 0x40f728u: goto label_40f728;
        case 0x40f72cu: goto label_40f72c;
        case 0x40f730u: goto label_40f730;
        case 0x40f734u: goto label_40f734;
        case 0x40f738u: goto label_40f738;
        case 0x40f73cu: goto label_40f73c;
        case 0x40f740u: goto label_40f740;
        case 0x40f744u: goto label_40f744;
        case 0x40f748u: goto label_40f748;
        case 0x40f74cu: goto label_40f74c;
        default: break;
    }

    ctx->pc = 0x40f6c0u;

label_40f6c0:
    // 0x40f6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x40f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40f6c4:
    // 0x40f6c4: 0x8f83bdc0  lw          $v1, -0x4240($gp)
    ctx->pc = 0x40f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
label_40f6c8:
    // 0x40f6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40f6cc:
    // 0x40f6cc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x40f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_40f6d0:
    // 0x40f6d0: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x40f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_40f6d4:
    // 0x40f6d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_40f6d8:
    // 0x40f6d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40f6dc:
    // 0x40f6dc: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x40f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_40f6e0:
    // 0x40f6e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40f6e4:
    // 0x40f6e4: 0x40f809  jalr        $v0
label_40f6e8:
    if (ctx->pc == 0x40F6E8u) {
        ctx->pc = 0x40F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6E4u;
        // 0x40f6e8: 0x34a5000d  ori         $a1, $a1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6ECu;
        goto label_40f6ec;
    }
    ctx->pc = 0x40F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40F6ECu);
        ctx->pc = 0x40F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6E4u;
        // 0x40f6e8: 0x34a5000d  ori         $a1, $a1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F6E4u, 0x40F6ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40F6ECu;
label_40f6ec:
    // 0x40f6ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40f6ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40f6f0:
    // 0x40f6f0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_40f6f4:
    if (ctx->pc == 0x40F6F4u) {
        ctx->pc = 0x40F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6F0u;
        // 0x40f6f4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F6F8u;
        goto label_40f6f8;
    }
    ctx->pc = 0x40F6F0u;
    {
        const bool branch_taken_0x40f6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F6F0u;
        // 0x40f6f4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f6f0) {
            ctx->pc = 0x40F740u;
            goto label_40f740;
        }
    }
    ctx->pc = 0x40F6F8u;
label_40f6f8:
    // 0x40f6f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x40f6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f6fc:
    // 0x40f6fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40f6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40f700:
    // 0x40f700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40f700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40f704:
    // 0x40f704: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x40f704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_40f708:
    // 0x40f708: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x40f708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_40f70c:
    // 0x40f70c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x40f70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_40f710:
    // 0x40f710: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x40f710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_40f714:
    // 0x40f714: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x40f714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_40f718:
    // 0x40f718: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x40f718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_40f71c:
    // 0x40f71c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x40f71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_40f720:
    // 0x40f720: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x40f720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_40f724:
    // 0x40f724: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x40f724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_40f728:
    // 0x40f728: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x40f728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_40f72c:
    // 0x40f72c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x40f72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_40f730:
    // 0x40f730: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x40f730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_40f734:
    // 0x40f734: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x40f734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_40f738:
    // 0x40f738: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x40f738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_40f73c:
    // 0x40f73c: 0x0  nop
    ctx->pc = 0x40f73cu;
    // NOP
label_40f740:
    // 0x40f740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40f740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40f744:
    // 0x40f744: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x40f744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40f748:
    // 0x40f748: 0x3e00008  jr          $ra
label_40f74c:
    if (ctx->pc == 0x40F74Cu) {
        ctx->pc = 0x40F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F748u;
        // 0x40f74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40F750u;
        goto label_fallthrough_0x40f748;
    }
    ctx->pc = 0x40F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F748u;
        // 0x40f74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40f748:
    ctx->pc = 0x40F750u;
}
