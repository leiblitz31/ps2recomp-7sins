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

// Function: sub_0025F640
// Address: 0x25f640 - 0x25f8a0
void sub_0025F640_0x25f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F640_0x25f640");
#endif

    switch (ctx->pc) {
        case 0x25f6a0u: goto label_25f6a0;
        case 0x25f6b4u: goto label_25f6b4;
        case 0x25f6c4u: goto label_25f6c4;
        case 0x25f6e4u: goto label_25f6e4;
        case 0x25f728u: goto label_25f728;
        case 0x25f750u: goto label_25f750;
        case 0x25f75cu: goto label_25f75c;
        case 0x25f768u: goto label_25f768;
        case 0x25f778u: goto label_25f778;
        case 0x25f794u: goto label_25f794;
        case 0x25f80cu: goto label_25f80c;
        case 0x25f830u: goto label_25f830;
        case 0x25f83cu: goto label_25f83c;
        case 0x25f854u: goto label_25f854;
        case 0x25f864u: goto label_25f864;
        default: break;
    }

    ctx->pc = 0x25f640u;

    // 0x25f640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f644: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25f644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25f648: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f64c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25f64cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25f650: 0x3e00008  jr          $ra
    ctx->pc = 0x25F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F658u;
    // 0x25f658: 0x0  nop
    ctx->pc = 0x25f658u;
    // NOP
    // 0x25f65c: 0x0  nop
    ctx->pc = 0x25f65cu;
    // NOP
    // 0x25f660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f66c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25f66cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x25f670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f674: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25F674u;
    {
        const bool branch_taken_0x25f674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f674) {
            ctx->pc = 0x25F6E4u;
            goto label_25f6e4;
        }
    }
    ctx->pc = 0x25F67Cu;
    // 0x25f67c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x25f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x25f680: 0x24635990  addiu       $v1, $v1, 0x5990
    ctx->pc = 0x25f680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22928));
    // 0x25f684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25f688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25f68c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f690: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25f690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25f694: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f698: 0xc097cb8  jal         func_25F2E0
    ctx->pc = 0x25F698u;
    SET_GPR_U32(ctx, 31, 0x25F6A0u);
    ctx->pc = 0x25F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F2E0u, 0x25F698u, 0x25F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6A0u;
label_25f6a0:
    // 0x25f6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6a4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x25f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x25f6a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f6ac: 0xc075840  jal         func_1D6100
    ctx->pc = 0x25F6ACu;
    SET_GPR_U32(ctx, 31, 0x25F6B4u);
    ctx->pc = 0x1D6100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6100u, 0x25F6ACu, 0x25F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6B4u;
label_25f6b4:
    // 0x25f6b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6bc: 0xc091188  jal         func_244620
    ctx->pc = 0x25F6BCu;
    SET_GPR_U32(ctx, 31, 0x25F6C4u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x25F6BCu, 0x25F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6C4u;
label_25f6c4:
    // 0x25f6c4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25f6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f6c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25f6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25f6cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25f6ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25f6d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F6D0u;
    {
        const bool branch_taken_0x25f6d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25f6d0) {
            ctx->pc = 0x25F6E4u;
            goto label_25f6e4;
        }
    }
    ctx->pc = 0x25F6D8u;
    // 0x25f6d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6dc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25F6DCu;
    SET_GPR_U32(ctx, 31, 0x25F6E4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25F6DCu, 0x25F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6E4u;
label_25f6e4:
    // 0x25f6e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f6ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f6ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F6F8u;
    // 0x25f6f8: 0x0  nop
    ctx->pc = 0x25f6f8u;
    // NOP
    // 0x25f6fc: 0x0  nop
    ctx->pc = 0x25f6fcu;
    // NOP
    // 0x25f700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25f700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25f704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25f704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25f708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f70c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f718: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x25f718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x25f71c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f720: 0xc0911a4  jal         func_244690
    ctx->pc = 0x25F720u;
    SET_GPR_U32(ctx, 31, 0x25F728u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x25F720u, 0x25F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F728u;
label_25f728:
    // 0x25f728: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x25f728u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25f72c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x25f72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x25f730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f734: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x25F734u;
    {
        const bool branch_taken_0x25f734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f734) {
            ctx->pc = 0x25F874u;
            goto label_25f874;
        }
    }
    ctx->pc = 0x25F73Cu;
    // 0x25f73c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f740: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25f744: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25f748: 0xc0985f8  jal         func_2617E0
    ctx->pc = 0x25F748u;
    SET_GPR_U32(ctx, 31, 0x25F750u);
    ctx->pc = 0x2617E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2617E0u, 0x25F748u, 0x25F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F750u;
label_25f750:
    // 0x25f750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25f750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f754: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x25F754u;
    {
        const bool branch_taken_0x25f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f754) {
            ctx->pc = 0x25F810u;
            goto label_25f810;
        }
    }
    ctx->pc = 0x25F75Cu;
label_25f75c:
    // 0x25f75c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x25f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x25f760: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x25F760u;
    SET_GPR_U32(ctx, 31, 0x25F768u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x25F760u, 0x25F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F768u;
label_25f768:
    // 0x25f768: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x25f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x25f76c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f770: 0xc0400e0  jal         func_100380
    ctx->pc = 0x25F770u;
    SET_GPR_U32(ctx, 31, 0x25F778u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x25F770u, 0x25F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F778u;
label_25f778:
    // 0x25f778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f77c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F77Cu;
    {
        const bool branch_taken_0x25f77c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f77c) {
            ctx->pc = 0x25F798u;
            goto label_25f798;
        }
    }
    ctx->pc = 0x25F784u;
    // 0x25f784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f788: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25f788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25f78c: 0xc098564  jal         func_261590
    ctx->pc = 0x25F78Cu;
    SET_GPR_U32(ctx, 31, 0x25F794u);
    ctx->pc = 0x261590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261590u, 0x25F78Cu, 0x25F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F794u;
label_25f794:
    // 0x25f794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f798:
    // 0x25f798: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x25f798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
    // 0x25f79c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x25f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25f7a0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25F7A0u;
    {
        const bool branch_taken_0x25f7a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f7a0) {
            ctx->pc = 0x25F7CCu;
            goto label_25f7cc;
        }
    }
    ctx->pc = 0x25F7A8u;
    // 0x25f7a8: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x25f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f7ac: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x25f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25f7b0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25f7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25f7b4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x25f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x25f7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f7bc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x25f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25f7c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25f7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25f7c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25F7C4u;
    {
        const bool branch_taken_0x25f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f7c4) {
            ctx->pc = 0x25F7F8u;
            goto label_25f7f8;
        }
    }
    ctx->pc = 0x25F7CCu;
label_25f7cc:
    // 0x25f7cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25f7d0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25F7D0u;
    {
        const bool branch_taken_0x25f7d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f7d0) {
            ctx->pc = 0x25F7F8u;
            goto label_25f7f8;
        }
    }
    ctx->pc = 0x25F7D8u;
    // 0x25f7d8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x25f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x25f7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f7e0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x25f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25f7e4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25f7e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x25f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x25f7ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25f7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25f7f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x25f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25f7f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25f7f8:
    // 0x25f7f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f7fc: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x25f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x25f800: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x25f804: 0xc097e70  jal         func_25F9C0
    ctx->pc = 0x25F804u;
    SET_GPR_U32(ctx, 31, 0x25F80Cu);
    ctx->pc = 0x25F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9C0u, 0x25F804u, 0x25F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F80Cu;
label_25f80c:
    // 0x25f80c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25f80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_25f810:
    // 0x25f810: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x25f810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x25f814: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x25F814u;
    {
        const bool branch_taken_0x25f814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f814) {
            ctx->pc = 0x25F75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f75c;
        }
    }
    ctx->pc = 0x25F81Cu;
    // 0x25f81c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f820: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x25f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x25f824: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25f828: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x25F828u;
    SET_GPR_U32(ctx, 31, 0x25F830u);
    ctx->pc = 0x25F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F8A0u, 0x25F828u, 0x25F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F830u;
label_25f830:
    // 0x25f830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25f830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f834: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25F834u;
    {
        const bool branch_taken_0x25f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f834) {
            ctx->pc = 0x25F868u;
            goto label_25f868;
        }
    }
    ctx->pc = 0x25F83Cu;
label_25f83c:
    // 0x25f83c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f840: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f844: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x25f844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x25f848: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25f848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f84c: 0xc078840  jal         func_1E2100
    ctx->pc = 0x25F84Cu;
    SET_GPR_U32(ctx, 31, 0x25F854u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x25F84Cu, 0x25F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F854u;
label_25f854:
    // 0x25f854: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f85c: 0xc078820  jal         func_1E2080
    ctx->pc = 0x25F85Cu;
    SET_GPR_U32(ctx, 31, 0x25F864u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x25F85Cu, 0x25F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F864u;
label_25f864:
    // 0x25f864: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_25f868:
    // 0x25f868: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x25f868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x25f86c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x25F86Cu;
    {
        const bool branch_taken_0x25f86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f86c) {
            ctx->pc = 0x25F83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f83c;
        }
    }
    ctx->pc = 0x25F874u;
label_25f874:
    // 0x25f874: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25f874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f87c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f88c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25f88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25f890: 0x3e00008  jr          $ra
    ctx->pc = 0x25F890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F898u;
    // 0x25f898: 0x0  nop
    ctx->pc = 0x25f898u;
    // NOP
    // 0x25f89c: 0x0  nop
    ctx->pc = 0x25f89cu;
    // NOP
    ctx->pc = 0x25f8a0u;
}
