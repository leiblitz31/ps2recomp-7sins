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

// Function: sub_00297240
// Address: 0x297240 - 0x2976b0
void sub_00297240_0x297240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297240_0x297240");
#endif

    switch (ctx->pc) {
        case 0x2972a8u: goto label_2972a8;
        case 0x2972dcu: goto label_2972dc;
        case 0x2972f4u: goto label_2972f4;
        case 0x297314u: goto label_297314;
        case 0x29732cu: goto label_29732c;
        case 0x297344u: goto label_297344;
        case 0x297358u: goto label_297358;
        case 0x29736cu: goto label_29736c;
        case 0x297378u: goto label_297378;
        case 0x297388u: goto label_297388;
        case 0x297394u: goto label_297394;
        case 0x2973b8u: goto label_2973b8;
        case 0x2973d8u: goto label_2973d8;
        case 0x2973e8u: goto label_2973e8;
        case 0x2973fcu: goto label_2973fc;
        case 0x297424u: goto label_297424;
        case 0x297430u: goto label_297430;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974f0u: goto label_2974f0;
        case 0x297510u: goto label_297510;
        case 0x297520u: goto label_297520;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975e8u: goto label_2975e8;
        case 0x297664u: goto label_297664;
        case 0x297670u: goto label_297670;
        default: break;
    }

    ctx->pc = 0x297240u;

    // 0x297240: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x297244: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x297244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x297248: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x297248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29724c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x297250: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x297250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x297254: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29725c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297260: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x297260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x297264: 0xa3a50090  sb          $a1, 0x90($sp)
    ctx->pc = 0x297264u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 5));
    // 0x297268: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x297268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x29726c: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x29726cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297270: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x297270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x297274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297278: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x297278u;
    {
        const bool branch_taken_0x297278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297278) {
            ctx->pc = 0x2973F0u;
            goto label_2973f0;
        }
    }
    ctx->pc = 0x297280u;
    // 0x297280: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x297280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x297284: 0x1003006a  beq         $zero, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x297284u;
    {
        const bool branch_taken_0x297284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x297284) {
            ctx->pc = 0x297430u;
            goto label_297430;
        }
    }
    ctx->pc = 0x29728Cu;
    // 0x29728c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x29728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297290: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x297290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x297294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297298: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x297298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29729c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x29729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2972a0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2972A0u;
    SET_GPR_U32(ctx, 31, 0x2972A8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2972A0u, 0x2972A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972A8u;
label_2972a8:
    // 0x2972a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2972a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2972ac: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2972ACu;
    {
        const bool branch_taken_0x2972ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2972ac) {
            ctx->pc = 0x297300u;
            goto label_297300;
        }
    }
    ctx->pc = 0x2972B4u;
    // 0x2972b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2972b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2972b8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2972B8u;
    {
        const bool branch_taken_0x2972b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2972b8) {
            ctx->pc = 0x2972C8u;
            goto label_2972c8;
        }
    }
    ctx->pc = 0x2972C0u;
    // 0x2972c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2972C0u;
    {
        const bool branch_taken_0x2972c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972c0) {
            ctx->pc = 0x297330u;
            goto label_297330;
        }
    }
    ctx->pc = 0x2972C8u;
label_2972c8:
    // 0x2972c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2972c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2972cc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2972ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2972d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2972d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2972d4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2972D4u;
    SET_GPR_U32(ctx, 31, 0x2972DCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2972D4u, 0x2972DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972DCu;
label_2972dc:
    // 0x2972dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2972dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972e0: 0x10140013  beq         $zero, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x2972E0u;
    {
        const bool branch_taken_0x2972e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x2972e0) {
            ctx->pc = 0x297330u;
            goto label_297330;
        }
    }
    ctx->pc = 0x2972E8u;
    // 0x2972e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2972e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972ec: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2972ECu;
    SET_GPR_U32(ctx, 31, 0x2972F4u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2972ECu, 0x2972F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972F4u;
label_2972f4:
    // 0x2972f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2972f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2972f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2972F8u;
    {
        const bool branch_taken_0x2972f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972f8) {
            ctx->pc = 0x297330u;
            goto label_297330;
        }
    }
    ctx->pc = 0x297300u;
label_297300:
    // 0x297300: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x297300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297304: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x297304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x297308: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x297308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29730c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29730Cu;
    SET_GPR_U32(ctx, 31, 0x297314u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29730Cu, 0x297314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297314u;
label_297314:
    // 0x297314: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x297314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297318: 0x10130005  beq         $zero, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x297318u;
    {
        const bool branch_taken_0x297318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x297318) {
            ctx->pc = 0x297330u;
            goto label_297330;
        }
    }
    ctx->pc = 0x297320u;
    // 0x297320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297324: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x297324u;
    SET_GPR_U32(ctx, 31, 0x29732Cu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x297324u, 0x29732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29732Cu;
label_29732c:
    // 0x29732c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29732cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297330:
    // 0x297330: 0x1010003f  beq         $zero, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x297330u;
    {
        const bool branch_taken_0x297330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x297330) {
            ctx->pc = 0x297430u;
            goto label_297430;
        }
    }
    ctx->pc = 0x297338u;
    // 0x297338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29733c: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x29733Cu;
    SET_GPR_U32(ctx, 31, 0x297344u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x29733Cu, 0x297344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297344u;
label_297344:
    // 0x297344: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x297344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297348: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x297348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x29734c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x29734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x297350: 0xc088560  jal         func_221580
    ctx->pc = 0x297350u;
    SET_GPR_U32(ctx, 31, 0x297358u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x297350u, 0x297358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297358u;
label_297358:
    // 0x297358: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x297358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29735c: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x29735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x297360: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x297360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x297364: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x297364u;
    SET_GPR_U32(ctx, 31, 0x29736Cu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x297364u, 0x29736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29736Cu;
label_29736c:
    // 0x29736c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x29736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297370: 0xc0a599c  jal         func_296670
    ctx->pc = 0x297370u;
    SET_GPR_U32(ctx, 31, 0x297378u);
    ctx->pc = 0x296670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296670u, 0x297370u, 0x297378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297378u;
label_297378:
    // 0x297378: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29737c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x29737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x297380: 0xc0a5710  jal         func_295C40
    ctx->pc = 0x297380u;
    SET_GPR_U32(ctx, 31, 0x297388u);
    ctx->pc = 0x295C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C40u, 0x297380u, 0x297388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297388u;
label_297388:
    // 0x297388: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x297388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29738c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x29738Cu;
    SET_GPR_U32(ctx, 31, 0x297394u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x29738Cu, 0x297394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297394u;
label_297394:
    // 0x297394: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297398: 0x1011000f  beq         $zero, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x297398u;
    {
        const bool branch_taken_0x297398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x297398) {
            ctx->pc = 0x2973D8u;
            goto label_2973d8;
        }
    }
    ctx->pc = 0x2973A0u;
    // 0x2973a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2973a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2973a4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2973a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2973a8: 0xa04300c8  sb          $v1, 0xC8($v0)
    ctx->pc = 0x2973a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 3));
    // 0x2973ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2973acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973b0: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2973B0u;
    SET_GPR_U32(ctx, 31, 0x2973B8u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2973B0u, 0x2973B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973B8u;
label_2973b8:
    // 0x2973b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2973b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973bc: 0x14150006  bne         $zero, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2973BCu;
    {
        const bool branch_taken_0x2973bc = (GPR_U64(ctx, 0) != GPR_U64(ctx, 21));
        if (branch_taken_0x2973bc) {
            ctx->pc = 0x2973D8u;
            goto label_2973d8;
        }
    }
    ctx->pc = 0x2973C4u;
    // 0x2973c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2973c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2973c8: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x2973c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2973cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2973ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973d0: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x2973D0u;
    SET_GPR_U32(ctx, 31, 0x2973D8u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x2973D0u, 0x2973D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973D8u;
label_2973d8:
    // 0x2973d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2973d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2973dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2973dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2973e0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x2973E0u;
    SET_GPR_U32(ctx, 31, 0x2973E8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2973E0u, 0x2973E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973E8u;
label_2973e8:
    // 0x2973e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2973E8u;
    {
        const bool branch_taken_0x2973e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973e8) {
            ctx->pc = 0x297430u;
            goto label_297430;
        }
    }
    ctx->pc = 0x2973F0u;
label_2973f0:
    // 0x2973f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2973f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2973f4: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x2973F4u;
    SET_GPR_U32(ctx, 31, 0x2973FCu);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x2973F4u, 0x2973FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2973FCu;
label_2973fc:
    // 0x2973fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2973fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297400: 0x1012000b  beq         $zero, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x297400u;
    {
        const bool branch_taken_0x297400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x297400) {
            ctx->pc = 0x297430u;
            goto label_297430;
        }
    }
    ctx->pc = 0x297408u;
    // 0x297408: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x297408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29740c: 0xa04000c8  sb          $zero, 0xC8($v0)
    ctx->pc = 0x29740cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x297410: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x297410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297414: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x297414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x297418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x297418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29741c: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x29741Cu;
    SET_GPR_U32(ctx, 31, 0x297424u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x29741Cu, 0x297424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297424u;
label_297424:
    // 0x297424: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x297424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297428: 0xc0a599c  jal         func_296670
    ctx->pc = 0x297428u;
    SET_GPR_U32(ctx, 31, 0x297430u);
    ctx->pc = 0x296670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296670u, 0x297428u, 0x297430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297430u;
label_297430:
    // 0x297430: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x297430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x297434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x297438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29743c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29743cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29744c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x29744cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x297450: 0x3e00008  jr          $ra
    ctx->pc = 0x297450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297458u;
    // 0x297458: 0x0  nop
    ctx->pc = 0x297458u;
    // NOP
    // 0x29745c: 0x0  nop
    ctx->pc = 0x29745cu;
    // NOP
    // 0x297460: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x297460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x297464: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x297468: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x297468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29746c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x297470: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x297470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x297474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x297474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x297478: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x297478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29747c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x297480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29748c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x29748cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x297490: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x297490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x297494: 0x906300c8  lbu         $v1, 0xC8($v1)
    ctx->pc = 0x297494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x297498: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x297498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29749c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2974a0: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2974A0u;
    {
        const bool branch_taken_0x2974a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2974a0) {
            ctx->pc = 0x297670u;
            goto label_297670;
        }
    }
    ctx->pc = 0x2974A8u;
    // 0x2974a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2974a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2974ac: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2974acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2974b0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2974B0u;
    SET_GPR_U32(ctx, 31, 0x2974B8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2974B0u, 0x2974B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974B8u;
label_2974b8:
    // 0x2974b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2974b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2974bc: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2974BCu;
    {
        const bool branch_taken_0x2974bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2974bc) {
            ctx->pc = 0x297670u;
            goto label_297670;
        }
    }
    ctx->pc = 0x2974C4u;
    // 0x2974c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2974c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2974c8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2974c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2974cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2974ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2974d0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2974D0u;
    SET_GPR_U32(ctx, 31, 0x2974D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2974D0u, 0x2974D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974D8u;
label_2974d8:
    // 0x2974d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2974d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2974dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2974e0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2974e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2974e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2974e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2974e8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2974E8u;
    SET_GPR_U32(ctx, 31, 0x2974F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2974E8u, 0x2974F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974F0u;
label_2974f0:
    // 0x2974f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2974f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974f4: 0x101e005e  beq         $zero, $fp, . + 4 + (0x5E << 2)
    ctx->pc = 0x2974F4u;
    {
        const bool branch_taken_0x2974f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x2974f4) {
            ctx->pc = 0x297670u;
            goto label_297670;
        }
    }
    ctx->pc = 0x2974FCu;
    // 0x2974fc: 0x1012005c  beq         $zero, $s2, . + 4 + (0x5C << 2)
    ctx->pc = 0x2974FCu;
    {
        const bool branch_taken_0x2974fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x2974fc) {
            ctx->pc = 0x297670u;
            goto label_297670;
        }
    }
    ctx->pc = 0x297504u;
    // 0x297504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297508: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x297508u;
    SET_GPR_U32(ctx, 31, 0x297510u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x297508u, 0x297510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297510u;
label_297510:
    // 0x297510: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x297510u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297518: 0xc096950  jal         func_25A540
    ctx->pc = 0x297518u;
    SET_GPR_U32(ctx, 31, 0x297520u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x297518u, 0x297520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297520u;
label_297520:
    // 0x297520: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x297520u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297524: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x297524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x297528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29752c: 0x0  nop
    ctx->pc = 0x29752cu;
    // NOP
    // 0x297530: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x297530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x297534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297538: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297538u;
    {
        const bool branch_taken_0x297538 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x297538) {
            ctx->pc = 0x297550u;
            goto label_297550;
        }
    }
    ctx->pc = 0x297540u;
    // 0x297540: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x297540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x297544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297548: 0x0  nop
    ctx->pc = 0x297548u;
    // NOP
    // 0x29754c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x29754cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_297550:
    // 0x297550: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x297550u;
    {
        const bool branch_taken_0x297550 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x297550) {
            ctx->pc = 0x2975A4u;
            goto label_2975a4;
        }
    }
    ctx->pc = 0x297558u;
    // 0x297558: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29755c: 0x12e20011  beq         $s7, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29755Cu;
    {
        const bool branch_taken_0x29755c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x29755c) {
            ctx->pc = 0x2975A4u;
            goto label_2975a4;
        }
    }
    ctx->pc = 0x297564u;
    // 0x297564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297568: 0x12e2000e  beq         $s7, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x297568u;
    {
        const bool branch_taken_0x297568 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x297568) {
            ctx->pc = 0x2975A4u;
            goto label_2975a4;
        }
    }
    ctx->pc = 0x297570u;
    // 0x297570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x297570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297574: 0x12e2000b  beq         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x297574u;
    {
        const bool branch_taken_0x297574 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x297574) {
            ctx->pc = 0x2975A4u;
            goto label_2975a4;
        }
    }
    ctx->pc = 0x29757Cu;
    // 0x29757c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297580: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297580u;
    {
        const bool branch_taken_0x297580 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x297580) {
            ctx->pc = 0x297590u;
            goto label_297590;
        }
    }
    ctx->pc = 0x297588u;
    // 0x297588: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x297588u;
    {
        const bool branch_taken_0x297588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297588) {
            ctx->pc = 0x2975A4u;
            goto label_2975a4;
        }
    }
    ctx->pc = 0x297590u;
label_297590:
    // 0x297590: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x297590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x297594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297598: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x297598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29759c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29759cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2975a0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2975a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2975a4:
    // 0x2975a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2975a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2975a8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2975ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2975acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2975b0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2975B0u;
    SET_GPR_U32(ctx, 31, 0x2975B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2975B0u, 0x2975B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975B8u;
label_2975b8:
    // 0x2975b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2975b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2975bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975c0: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2975C0u;
    SET_GPR_U32(ctx, 31, 0x2975C8u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2975C0u, 0x2975C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975C8u;
label_2975c8:
    // 0x2975c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2975c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975cc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2975ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2975d0: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x2975D0u;
    SET_GPR_U32(ctx, 31, 0x2975D8u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x2975D0u, 0x2975D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975D8u;
label_2975d8:
    // 0x2975d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2975d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975dc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2975dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2975e0: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x2975E0u;
    SET_GPR_U32(ctx, 31, 0x2975E8u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x2975E0u, 0x2975E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975E8u;
label_2975e8:
    // 0x2975e8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2975e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2975ec: 0x26930040  addiu       $s3, $s4, 0x40
    ctx->pc = 0x2975ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2975f0: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2975f4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2975f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2975f8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2975f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2975fc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2975fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297600: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x297600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297604: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x297604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x297608: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x297608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29760c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x297610: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x297610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297614: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x297614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297618: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x297618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29761c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x29761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x297620: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x297620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297624: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x297624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x297628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29762c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x29762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x297630: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x297630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297634: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x297634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297638: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x297638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29763c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x29763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x297640: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x297640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297644: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x297644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297648: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x297648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29764c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x29764cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x297650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297654: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x297658: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x297658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29765c: 0xc106598  jal         func_419660
    ctx->pc = 0x29765Cu;
    SET_GPR_U32(ctx, 31, 0x297664u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x29765Cu, 0x297664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297664u;
label_297664:
    // 0x297664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297668: 0xc106794  jal         func_419E50
    ctx->pc = 0x297668u;
    SET_GPR_U32(ctx, 31, 0x297670u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x297668u, 0x297670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297670u;
label_297670:
    // 0x297670: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x297670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297674: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x297674u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297678: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x297678u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29767c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29767cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297680: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x297680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x297684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x297688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29768c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29768cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297698: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x297698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29769c: 0x3e00008  jr          $ra
    ctx->pc = 0x29769Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29769Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2976A4u;
    // 0x2976a4: 0x0  nop
    ctx->pc = 0x2976a4u;
    // NOP
    // 0x2976a8: 0x0  nop
    ctx->pc = 0x2976a8u;
    // NOP
    // 0x2976ac: 0x0  nop
    ctx->pc = 0x2976acu;
    // NOP
    ctx->pc = 0x2976b0u;
}
