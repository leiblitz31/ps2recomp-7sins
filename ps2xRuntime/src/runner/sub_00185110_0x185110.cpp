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

// Function: sub_00185110
// Address: 0x185110 - 0x185370
void sub_00185110_0x185110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185110_0x185110");
#endif

    switch (ctx->pc) {
        case 0x185150u: goto label_185150;
        case 0x18515cu: goto label_18515c;
        case 0x18517cu: goto label_18517c;
        case 0x185190u: goto label_185190;
        case 0x1851a4u: goto label_1851a4;
        case 0x1851c0u: goto label_1851c0;
        case 0x1851dcu: goto label_1851dc;
        case 0x1851f0u: goto label_1851f0;
        case 0x185204u: goto label_185204;
        case 0x185220u: goto label_185220;
        case 0x185238u: goto label_185238;
        case 0x185260u: goto label_185260;
        case 0x1852a8u: goto label_1852a8;
        case 0x1852c0u: goto label_1852c0;
        case 0x1852d0u: goto label_1852d0;
        case 0x1852e8u: goto label_1852e8;
        case 0x185300u: goto label_185300;
        case 0x185320u: goto label_185320;
        case 0x185334u: goto label_185334;
        default: break;
    }

    ctx->pc = 0x185110u;

    // 0x185110: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x185110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x185114: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x185114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x185118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x185118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18511c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x185120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x185120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x185124: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x185128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18512c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x185130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185138: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x185138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x18513c: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x18513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x185140: 0xa7a000ce  sh          $zero, 0xCE($sp)
    ctx->pc = 0x185140u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 206), (uint16_t)GPR_U32(ctx, 0));
    // 0x185144: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185148: 0xc119d5c  jal         func_467570
    ctx->pc = 0x185148u;
    SET_GPR_U32(ctx, 31, 0x185150u);
    ctx->pc = 0x467570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467570u, 0x185148u, 0x185150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185150u;
label_185150:
    // 0x185150: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x185150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x185154: 0xc0614e8  jal         func_1853A0
    ctx->pc = 0x185154u;
    SET_GPR_U32(ctx, 31, 0x18515Cu);
    ctx->pc = 0x1853A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853A0u, 0x185154u, 0x18515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18515Cu;
label_18515c:
    // 0x18515c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x18515cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185164: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x185164u;
    {
        const bool branch_taken_0x185164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x185164) {
            ctx->pc = 0x1851CCu;
            goto label_1851cc;
        }
    }
    ctx->pc = 0x18516Cu;
    // 0x18516c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x18516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x185170: 0x27859130  addiu       $a1, $gp, -0x6ED0
    ctx->pc = 0x185170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938928));
    // 0x185174: 0xc040304  jal         func_100C10
    ctx->pc = 0x185174u;
    SET_GPR_U32(ctx, 31, 0x18517Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x185174u, 0x18517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18517Cu;
label_18517c:
    // 0x18517c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185180: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x185180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x185184: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x185184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x185188: 0xc119dc4  jal         func_467710
    ctx->pc = 0x185188u;
    SET_GPR_U32(ctx, 31, 0x185190u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x185188u, 0x185190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185190u;
label_185190:
    // 0x185190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x185190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185194: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x185194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x185198: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x185198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18519c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x18519Cu;
    SET_GPR_U32(ctx, 31, 0x1851A4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x18519Cu, 0x1851A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851A4u;
label_1851a4:
    // 0x1851a4: 0x16600021  bnez        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1851A4u;
    {
        const bool branch_taken_0x1851a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1851a4) {
            ctx->pc = 0x18522Cu;
            goto label_18522c;
        }
    }
    ctx->pc = 0x1851ACu;
    // 0x1851ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1851acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1851b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1851b8: 0xc119d90  jal         func_467640
    ctx->pc = 0x1851B8u;
    SET_GPR_U32(ctx, 31, 0x1851C0u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x1851B8u, 0x1851C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851C0u;
label_1851c0:
    // 0x1851c0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1851c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851c4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1851C4u;
    {
        const bool branch_taken_0x1851c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851c4) {
            ctx->pc = 0x185338u;
            goto label_185338;
        }
    }
    ctx->pc = 0x1851CCu;
label_1851cc:
    // 0x1851cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1851ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1851d0: 0x27859134  addiu       $a1, $gp, -0x6ECC
    ctx->pc = 0x1851d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938932));
    // 0x1851d4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1851D4u;
    SET_GPR_U32(ctx, 31, 0x1851DCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1851D4u, 0x1851DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851DCu;
label_1851dc:
    // 0x1851dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1851dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1851e0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1851e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1851e4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1851e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1851e8: 0xc119dc4  jal         func_467710
    ctx->pc = 0x1851E8u;
    SET_GPR_U32(ctx, 31, 0x1851F0u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x1851E8u, 0x1851F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851F0u;
label_1851f0:
    // 0x1851f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1851f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1851f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1851f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1851f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1851fc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1851FCu;
    SET_GPR_U32(ctx, 31, 0x185204u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1851FCu, 0x185204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185204u;
label_185204:
    // 0x185204: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x185204u;
    {
        const bool branch_taken_0x185204 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x185204) {
            ctx->pc = 0x18522Cu;
            goto label_18522c;
        }
    }
    ctx->pc = 0x18520Cu;
    // 0x18520c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18520cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185210: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185214: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x185214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185218: 0xc119d90  jal         func_467640
    ctx->pc = 0x185218u;
    SET_GPR_U32(ctx, 31, 0x185220u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x185218u, 0x185220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185220u;
label_185220:
    // 0x185220: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x185220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185224: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x185224u;
    {
        const bool branch_taken_0x185224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185224) {
            ctx->pc = 0x185338u;
            goto label_185338;
        }
    }
    ctx->pc = 0x18522Cu;
label_18522c:
    // 0x18522c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185230: 0xc119e50  jal         func_467940
    ctx->pc = 0x185230u;
    SET_GPR_U32(ctx, 31, 0x185238u);
    ctx->pc = 0x467940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467940u, 0x185230u, 0x185238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185238u;
label_185238:
    // 0x185238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x185238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18523c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185240: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x185240u;
    {
        const bool branch_taken_0x185240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x185240) {
            ctx->pc = 0x1852A8u;
            goto label_1852a8;
        }
    }
    ctx->pc = 0x185248u;
    // 0x185248: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18524c: 0x27a500ce  addiu       $a1, $sp, 0xCE
    ctx->pc = 0x18524cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 206));
    // 0x185250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185254: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185258: 0xc119ea4  jal         func_467A90
    ctx->pc = 0x185258u;
    SET_GPR_U32(ctx, 31, 0x185260u);
    ctx->pc = 0x467A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A90u, 0x185258u, 0x185260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185260u;
label_185260:
    // 0x185260: 0x97a200ce  lhu         $v0, 0xCE($sp)
    ctx->pc = 0x185260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x185264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x185264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x185268: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x185268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x18526c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18526Cu;
    {
        const bool branch_taken_0x18526c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18526c) {
            ctx->pc = 0x185288u;
            goto label_185288;
        }
    }
    ctx->pc = 0x185274u;
    // 0x185274: 0x97a200ce  lhu         $v0, 0xCE($sp)
    ctx->pc = 0x185274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x185278: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x185278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18527c: 0x3402feff  ori         $v0, $zero, 0xFEFF
    ctx->pc = 0x18527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
    // 0x185280: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x185280u;
    {
        const bool branch_taken_0x185280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185280) {
            ctx->pc = 0x185294u;
            goto label_185294;
        }
    }
    ctx->pc = 0x185288u;
label_185288:
    // 0x185288: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x185288u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x18528c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18528Cu;
    {
        const bool branch_taken_0x18528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18528c) {
            ctx->pc = 0x1852A8u;
            goto label_1852a8;
        }
    }
    ctx->pc = 0x185294u;
label_185294:
    // 0x185294: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18529c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18529cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852a0: 0xc119eb8  jal         func_467AE0
    ctx->pc = 0x1852A0u;
    SET_GPR_U32(ctx, 31, 0x1852A8u);
    ctx->pc = 0x467AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467AE0u, 0x1852A0u, 0x1852A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852A8u;
label_1852a8:
    // 0x1852a8: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x1852a8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1852ac: 0x1012  mflo        $v0
    ctx->pc = 0x1852acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1852b0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1852b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1852b4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1852b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1852b8: 0xc11939c  jal         func_464E70
    ctx->pc = 0x1852B8u;
    SET_GPR_U32(ctx, 31, 0x1852C0u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x1852B8u, 0x1852C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852C0u;
label_1852c0:
    // 0x1852c0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1852c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1852c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1852c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852c8: 0xc0614dc  jal         func_185370
    ctx->pc = 0x1852C8u;
    SET_GPR_U32(ctx, 31, 0x1852D0u);
    ctx->pc = 0x185370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185370u, 0x1852C8u, 0x1852D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852D0u;
label_1852d0:
    // 0x1852d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1852d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1852d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1852d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1852dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1852dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852e0: 0xc119ea4  jal         func_467A90
    ctx->pc = 0x1852E0u;
    SET_GPR_U32(ctx, 31, 0x1852E8u);
    ctx->pc = 0x467A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467A90u, 0x1852E0u, 0x1852E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852E8u;
label_1852e8:
    // 0x1852e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1852e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852ec: 0x2f0001b  divu        $zero, $s7, $s0
    ctx->pc = 0x1852ecu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
    // 0x1852f0: 0x2812  mflo        $a1
    ctx->pc = 0x1852f0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1852f4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1852f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1852f8: 0xc061d64  jal         func_187590
    ctx->pc = 0x1852F8u;
    SET_GPR_U32(ctx, 31, 0x185300u);
    ctx->pc = 0x187590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187590u, 0x1852F8u, 0x185300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185300u;
label_185300:
    // 0x185300: 0x97a200ce  lhu         $v0, 0xCE($sp)
    ctx->pc = 0x185300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x185304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x185304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x185308: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x185308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x18530c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18530Cu;
    {
        const bool branch_taken_0x18530c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18530c) {
            ctx->pc = 0x185320u;
            goto label_185320;
        }
    }
    ctx->pc = 0x185314u;
    // 0x185314: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x185314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x185318: 0xc119338  jal         func_464CE0
    ctx->pc = 0x185318u;
    SET_GPR_U32(ctx, 31, 0x185320u);
    ctx->pc = 0x464CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464CE0u, 0x185318u, 0x185320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185320u;
label_185320:
    // 0x185320: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x185320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185324: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x185324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x185328: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x185328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18532c: 0xc119d90  jal         func_467640
    ctx->pc = 0x18532Cu;
    SET_GPR_U32(ctx, 31, 0x185334u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x18532Cu, 0x185334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185334u;
label_185334:
    // 0x185334: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x185334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_185338:
    // 0x185338: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18533c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18533cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185340: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x185340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185344: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x185344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18534c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18534cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18535c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x185360: 0x3e00008  jr          $ra
    ctx->pc = 0x185360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185368u;
    // 0x185368: 0x0  nop
    ctx->pc = 0x185368u;
    // NOP
    // 0x18536c: 0x0  nop
    ctx->pc = 0x18536cu;
    // NOP
    ctx->pc = 0x185370u;
}
