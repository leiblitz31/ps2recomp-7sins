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

// Function: sub_001A1150
// Address: 0x1a1150 - 0x1a1380
void sub_001A1150_0x1a1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1150_0x1a1150");
#endif

    switch (ctx->pc) {
        case 0x1a116cu: goto label_1a116c;
        case 0x1a117cu: goto label_1a117c;
        case 0x1a1190u: goto label_1a1190;
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a1228u: goto label_1a1228;
        case 0x1a1240u: goto label_1a1240;
        case 0x1a1250u: goto label_1a1250;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a1270u: goto label_1a1270;
        case 0x1a1298u: goto label_1a1298;
        case 0x1a12a4u: goto label_1a12a4;
        case 0x1a12b4u: goto label_1a12b4;
        case 0x1a12c4u: goto label_1a12c4;
        case 0x1a12d4u: goto label_1a12d4;
        case 0x1a12fcu: goto label_1a12fc;
        case 0x1a1308u: goto label_1a1308;
        case 0x1a1318u: goto label_1a1318;
        case 0x1a1328u: goto label_1a1328;
        case 0x1a1338u: goto label_1a1338;
        case 0x1a1360u: goto label_1a1360;
        default: break;
    }

    ctx->pc = 0x1a1150u;

    // 0x1a1150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a115c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a115cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a1160: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1164: 0xc04809c  jal         func_120270
    ctx->pc = 0x1A1164u;
    SET_GPR_U32(ctx, 31, 0x1A116Cu);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x1A1164u, 0x1A116Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A116Cu;
label_1a116c:
    // 0x1a116c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a116cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1170: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1174: 0xc04808c  jal         func_120230
    ctx->pc = 0x1A1174u;
    SET_GPR_U32(ctx, 31, 0x1A117Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x1A1174u, 0x1A117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A117Cu;
label_1a117c:
    // 0x1a117c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1184: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1188: 0xc0683ac  jal         func_1A0EB0
    ctx->pc = 0x1A1188u;
    SET_GPR_U32(ctx, 31, 0x1A1190u);
    ctx->pc = 0x1A0EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EB0u, 0x1A1188u, 0x1A1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1190u;
label_1a1190:
    // 0x1a1190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1198: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a119c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A11A4u;
    // 0x1a11a4: 0x0  nop
    ctx->pc = 0x1a11a4u;
    // NOP
    // 0x1a11a8: 0x0  nop
    ctx->pc = 0x1a11a8u;
    // NOP
    // 0x1a11ac: 0x0  nop
    ctx->pc = 0x1a11acu;
    // NOP
    // 0x1a11b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a11b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a11b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a11bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a11c0: 0xc064aec  jal         func_192BB0
    ctx->pc = 0x1A11C0u;
    SET_GPR_U32(ctx, 31, 0x1A11C8u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1A11C0u, 0x1A11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A11C8u;
label_1a11c8:
    // 0x1a11c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a11c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a11cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a11d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A11D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A11D8u;
    // 0x1a11d8: 0x0  nop
    ctx->pc = 0x1a11d8u;
    // NOP
    // 0x1a11dc: 0x0  nop
    ctx->pc = 0x1a11dcu;
    // NOP
    // 0x1a11e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a11e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a11e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a11e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a11e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a11e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a11ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a11ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a11f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a11f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11fc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1A11FCu;
    {
        const bool branch_taken_0x1a11fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a11fc) {
            ctx->pc = 0x1A1360u;
            goto label_1a1360;
        }
    }
    ctx->pc = 0x1A1204u;
    // 0x1a1204: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a1208: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a120c: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A120Cu;
    {
        const bool branch_taken_0x1a120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a120c) {
            ctx->pc = 0x1A1360u;
            goto label_1a1360;
        }
    }
    ctx->pc = 0x1A1214u;
    // 0x1a1214: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a1218: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a121c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1a121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a1220: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A1220u;
    SET_GPR_U32(ctx, 31, 0x1A1228u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A1220u, 0x1A1228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1228u;
label_1a1228:
    // 0x1a1228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a122c: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A122Cu;
    {
        const bool branch_taken_0x1a122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a122c) {
            ctx->pc = 0x1A1360u;
            goto label_1a1360;
        }
    }
    ctx->pc = 0x1A1234u;
    // 0x1a1234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1238: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A1238u;
    SET_GPR_U32(ctx, 31, 0x1A1240u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A1238u, 0x1A1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1240u;
label_1a1240:
    // 0x1a1240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1248: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A1248u;
    SET_GPR_U32(ctx, 31, 0x1A1250u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A1248u, 0x1A1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1250u;
label_1a1250:
    // 0x1a1250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a1250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1258: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A1258u;
    SET_GPR_U32(ctx, 31, 0x1A1260u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A1258u, 0x1A1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1268: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A1268u;
    SET_GPR_U32(ctx, 31, 0x1A1270u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A1268u, 0x1A1270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1270u;
label_1a1270:
    // 0x1a1270: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1274: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a1274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a1278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a1278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a127c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1280: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a1280u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a1284: 0x0  nop
    ctx->pc = 0x1a1284u;
    // NOP
    // 0x1a1288: 0x0  nop
    ctx->pc = 0x1a1288u;
    // NOP
    // 0x1a128c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a1290: 0xc094de0  jal         func_253780
    ctx->pc = 0x1A1290u;
    SET_GPR_U32(ctx, 31, 0x1A1298u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1A1290u, 0x1A1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1298u;
label_1a1298:
    // 0x1a1298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a129c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A129Cu;
    SET_GPR_U32(ctx, 31, 0x1A12A4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A129Cu, 0x1A12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12A4u;
label_1a12a4:
    // 0x1a12a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a12a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a12a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12ac: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A12ACu;
    SET_GPR_U32(ctx, 31, 0x1A12B4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A12ACu, 0x1A12B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12B4u;
label_1a12b4:
    // 0x1a12b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a12b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a12b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12bc: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A12BCu;
    SET_GPR_U32(ctx, 31, 0x1A12C4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A12BCu, 0x1A12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12C4u;
label_1a12c4:
    // 0x1a12c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a12c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a12c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12cc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A12CCu;
    SET_GPR_U32(ctx, 31, 0x1A12D4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A12CCu, 0x1A12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12D4u;
label_1a12d4:
    // 0x1a12d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a12d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a12dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a12dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a12e0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a12e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a12e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a12e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a12e8: 0x0  nop
    ctx->pc = 0x1a12e8u;
    // NOP
    // 0x1a12ec: 0x0  nop
    ctx->pc = 0x1a12ecu;
    // NOP
    // 0x1a12f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a12f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a12f4: 0xc094de0  jal         func_253780
    ctx->pc = 0x1A12F4u;
    SET_GPR_U32(ctx, 31, 0x1A12FCu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1A12F4u, 0x1A12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12FCu;
label_1a12fc:
    // 0x1a12fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a12fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1300: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A1300u;
    SET_GPR_U32(ctx, 31, 0x1A1308u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A1300u, 0x1A1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1308u;
label_1a1308:
    // 0x1a1308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a130c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1310: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A1310u;
    SET_GPR_U32(ctx, 31, 0x1A1318u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A1310u, 0x1A1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1318u;
label_1a1318:
    // 0x1a1318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a1318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a131c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1320: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1A1320u;
    SET_GPR_U32(ctx, 31, 0x1A1328u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1A1320u, 0x1A1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1328u;
label_1a1328:
    // 0x1a1328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a132c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1330: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1A1330u;
    SET_GPR_U32(ctx, 31, 0x1A1338u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1A1330u, 0x1A1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1338u;
label_1a1338:
    // 0x1a1338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a133c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a1340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a1340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1344: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1a1344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1348: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a1348u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a134c: 0x0  nop
    ctx->pc = 0x1a134cu;
    // NOP
    // 0x1a1350: 0x0  nop
    ctx->pc = 0x1a1350u;
    // NOP
    // 0x1a1354: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a1358: 0xc094de0  jal         func_253780
    ctx->pc = 0x1A1358u;
    SET_GPR_U32(ctx, 31, 0x1A1360u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1A1358u, 0x1A1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1360u;
label_1a1360:
    // 0x1a1360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a136c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a136cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1370: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1378u;
    // 0x1a1378: 0x0  nop
    ctx->pc = 0x1a1378u;
    // NOP
    // 0x1a137c: 0x0  nop
    ctx->pc = 0x1a137cu;
    // NOP
    ctx->pc = 0x1a1380u;
}
