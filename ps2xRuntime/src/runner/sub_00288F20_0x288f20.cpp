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

// Function: sub_00288F20
// Address: 0x288f20 - 0x2891f0
void sub_00288F20_0x288f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288F20_0x288f20");
#endif

    switch (ctx->pc) {
        case 0x288f58u: goto label_288f58;
        case 0x288f88u: goto label_288f88;
        case 0x288fc4u: goto label_288fc4;
        case 0x288ff0u: goto label_288ff0;
        case 0x28900cu: goto label_28900c;
        case 0x289030u: goto label_289030;
        case 0x28904cu: goto label_28904c;
        case 0x28907cu: goto label_28907c;
        case 0x2890b0u: goto label_2890b0;
        case 0x2890ccu: goto label_2890cc;
        case 0x2890dcu: goto label_2890dc;
        case 0x289100u: goto label_289100;
        case 0x289120u: goto label_289120;
        case 0x289148u: goto label_289148;
        case 0x289164u: goto label_289164;
        case 0x289180u: goto label_289180;
        case 0x289188u: goto label_289188;
        case 0x2891a4u: goto label_2891a4;
        default: break;
    }

    ctx->pc = 0x288f20u;

    // 0x288f20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x288f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x288f24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x288f28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x288f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x288f2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x288f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x288f30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x288f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x288f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x288f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288f3c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x288f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x288f40: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x288f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x288f44: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x288f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x288f48: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x288f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x288f4c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x288f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288f50: 0xc0a36d4  jal         func_28DB50
    ctx->pc = 0x288F50u;
    SET_GPR_U32(ctx, 31, 0x288F58u);
    ctx->pc = 0x28DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB50u, 0x288F50u, 0x288F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F58u;
label_288f58:
    // 0x288f58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288f5c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x288f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x288f60: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x288F60u;
    {
        const bool branch_taken_0x288f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288f60) {
            ctx->pc = 0x288F94u;
            goto label_288f94;
        }
    }
    ctx->pc = 0x288F68u;
    // 0x288f68: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288f6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x288f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288f70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288F70u;
    {
        const bool branch_taken_0x288f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288f70) {
            ctx->pc = 0x288F94u;
            goto label_288f94;
        }
    }
    ctx->pc = 0x288F78u;
    // 0x288f78: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288f7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x288f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288f80: 0xc094d24  jal         func_253490
    ctx->pc = 0x288F80u;
    SET_GPR_U32(ctx, 31, 0x288F88u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x288F80u, 0x288F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F88u;
label_288f88:
    // 0x288f88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x288f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288f8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288f90: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x288f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_288f94:
    // 0x288f94: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288f98: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x288f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x288f9c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x288F9Cu;
    {
        const bool branch_taken_0x288f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x288f9c) {
            ctx->pc = 0x288FD0u;
            goto label_288fd0;
        }
    }
    ctx->pc = 0x288FA4u;
    // 0x288fa4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fa8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x288fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288fac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288FACu;
    {
        const bool branch_taken_0x288fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288fac) {
            ctx->pc = 0x288FD0u;
            goto label_288fd0;
        }
    }
    ctx->pc = 0x288FB4u;
    // 0x288fb4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fb8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x288fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288fbc: 0xc094d24  jal         func_253490
    ctx->pc = 0x288FBCu;
    SET_GPR_U32(ctx, 31, 0x288FC4u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x288FBCu, 0x288FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FC4u;
label_288fc4:
    // 0x288fc4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x288fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288fc8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fcc: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x288fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_288fd0:
    // 0x288fd0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fd4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x288fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288fd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288FD8u;
    {
        const bool branch_taken_0x288fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288fd8) {
            ctx->pc = 0x288FFCu;
            goto label_288ffc;
        }
    }
    ctx->pc = 0x288FE0u;
    // 0x288fe0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x288fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288fe4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x288fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288fe8: 0xc094d24  jal         func_253490
    ctx->pc = 0x288FE8u;
    SET_GPR_U32(ctx, 31, 0x288FF0u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x288FE8u, 0x288FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FF0u;
label_288ff0:
    // 0x288ff0: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x288ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x288ff4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x288FF4u;
    {
        const bool branch_taken_0x288ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288ff4) {
            ctx->pc = 0x289000u;
            goto label_289000;
        }
    }
    ctx->pc = 0x288FFCu;
label_288ffc:
    // 0x288ffc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x288ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289000:
    // 0x289000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289004: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x289004u;
    SET_GPR_U32(ctx, 31, 0x28900Cu);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x289004u, 0x28900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28900Cu;
label_28900c:
    // 0x28900c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x28900cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x289010: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x289010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289014: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x289014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x289018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289018u;
    {
        const bool branch_taken_0x289018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289018) {
            ctx->pc = 0x28903Cu;
            goto label_28903c;
        }
    }
    ctx->pc = 0x289020u;
    // 0x289020: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x289020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289024: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x289024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x289028: 0xc094d24  jal         func_253490
    ctx->pc = 0x289028u;
    SET_GPR_U32(ctx, 31, 0x289030u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x289028u, 0x289030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289030u;
label_289030:
    // 0x289030: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x289030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x289034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x289034u;
    {
        const bool branch_taken_0x289034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289034) {
            ctx->pc = 0x289040u;
            goto label_289040;
        }
    }
    ctx->pc = 0x28903Cu;
label_28903c:
    // 0x28903c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28903cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289040:
    // 0x289040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289044: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x289044u;
    SET_GPR_U32(ctx, 31, 0x28904Cu);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x289044u, 0x28904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28904Cu;
label_28904c:
    // 0x28904c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x28904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x289050: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x289050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289054: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x289054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x289058: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x289058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x28905c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28905Cu;
    {
        const bool branch_taken_0x28905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28905c) {
            ctx->pc = 0x289084u;
            goto label_289084;
        }
    }
    ctx->pc = 0x289064u;
    // 0x289064: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x289064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289068: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x289068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28906c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x28906cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x289070: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x289070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x289074: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x289074u;
    SET_GPR_U32(ctx, 31, 0x28907Cu);
    ctx->pc = 0x28AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AFB0u, 0x289074u, 0x28907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28907Cu;
label_28907c:
    // 0x28907c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289080: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x289080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_289084:
    // 0x289084: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x289084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289088: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x289088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28908c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28908cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289090: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x289090u;
    {
        const bool branch_taken_0x289090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289090) {
            ctx->pc = 0x2890B8u;
            goto label_2890b8;
        }
    }
    ctx->pc = 0x289098u;
    // 0x289098: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x289098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28909c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28909cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2890a0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2890a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2890a4: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x2890a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2890a8: 0xc0a24b8  jal         func_2892E0
    ctx->pc = 0x2890A8u;
    SET_GPR_U32(ctx, 31, 0x2890B0u);
    ctx->pc = 0x2892E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2892E0u, 0x2890A8u, 0x2890B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890B0u;
label_2890b0:
    // 0x2890b0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2890b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2890b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2890b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2890b8:
    // 0x2890b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2890bc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2890bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2890c0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2890c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2890c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2890C4u;
    SET_GPR_U32(ctx, 31, 0x2890CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2890C4u, 0x2890CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890CCu;
label_2890cc:
    // 0x2890cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2890ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2890d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890d4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2890D4u;
    {
        const bool branch_taken_0x2890d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2890d4) {
            ctx->pc = 0x2891A8u;
            goto label_2891a8;
        }
    }
    ctx->pc = 0x2890DCu;
label_2890dc:
    // 0x2890dc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2890dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2890e0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2890e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2890e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2890e8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2890e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2890ec: 0x1003002d  beq         $zero, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2890ECu;
    {
        const bool branch_taken_0x2890ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2890ec) {
            ctx->pc = 0x2891A4u;
            goto label_2891a4;
        }
    }
    ctx->pc = 0x2890F4u;
    // 0x2890f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2890f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890f8: 0xc091018  jal         func_244060
    ctx->pc = 0x2890F8u;
    SET_GPR_U32(ctx, 31, 0x289100u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2890F8u, 0x289100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289100u;
label_289100:
    // 0x289100: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x289100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x289104: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x289104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28910c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x289110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289114: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x289114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x289118: 0xc10671c  jal         func_419C70
    ctx->pc = 0x289118u;
    SET_GPR_U32(ctx, 31, 0x289120u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x289118u, 0x289120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289120u;
label_289120:
    // 0x289120: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x289120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x289124: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x289128: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x289128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28912c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289130: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x289130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x289134: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x289134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x289138: 0x24a575e0  addiu       $a1, $a1, 0x75E0
    ctx->pc = 0x289138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30176));
    // 0x28913c: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x28913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x289140: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x289140u;
    SET_GPR_U32(ctx, 31, 0x289148u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x289140u, 0x289148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289148u;
label_289148:
    // 0x289148: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28914c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289154: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x289154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289158: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x289158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28915c: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x28915Cu;
    SET_GPR_U32(ctx, 31, 0x289164u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x28915Cu, 0x289164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289164u;
label_289164:
    // 0x289164: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x289164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289168: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28916c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x289170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289174: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x289174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x289178: 0xc11dff8  jal         func_477FE0
    ctx->pc = 0x289178u;
    SET_GPR_U32(ctx, 31, 0x289180u);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x289178u, 0x289180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289180u;
label_289180:
    // 0x289180: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x289180u;
    SET_GPR_U32(ctx, 31, 0x289188u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x289180u, 0x289188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289188u;
label_289188:
    // 0x289188: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x289188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28918c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289198: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x289198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28919c: 0xc11fb08  jal         func_47EC20
    ctx->pc = 0x28919Cu;
    SET_GPR_U32(ctx, 31, 0x2891A4u);
    ctx->pc = 0x47EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EC20u, 0x28919Cu, 0x2891A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891A4u;
label_2891a4:
    // 0x2891a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2891a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2891a8:
    // 0x2891a8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x2891a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2891ac: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2891ACu;
    {
        const bool branch_taken_0x2891ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2891ac) {
            ctx->pc = 0x2890DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2890dc;
        }
    }
    ctx->pc = 0x2891B4u;
    // 0x2891b4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2891b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2891b8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2891b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2891bc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2891bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2891c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2891c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2891c4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2891c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2891c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2891c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2891cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2891ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2891d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2891d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2891d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2891d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2891d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2891d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2891dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2891dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2891e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2891e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2891e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2891E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2891ECu;
    // 0x2891ec: 0x0  nop
    ctx->pc = 0x2891ecu;
    // NOP
    ctx->pc = 0x2891f0u;
}
