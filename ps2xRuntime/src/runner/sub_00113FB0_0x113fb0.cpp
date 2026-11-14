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

// Function: sub_00113FB0
// Address: 0x113fb0 - 0x114150
void sub_00113FB0_0x113fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113FB0_0x113fb0");
#endif

    switch (ctx->pc) {
        case 0x113ffcu: goto label_113ffc;
        case 0x114014u: goto label_114014;
        case 0x114024u: goto label_114024;
        case 0x11403cu: goto label_11403c;
        case 0x114068u: goto label_114068;
        case 0x114078u: goto label_114078;
        case 0x114090u: goto label_114090;
        case 0x1140c0u: goto label_1140c0;
        case 0x1140ccu: goto label_1140cc;
        case 0x1140e0u: goto label_1140e0;
        case 0x1140f4u: goto label_1140f4;
        case 0x114108u: goto label_114108;
        default: break;
    }

    ctx->pc = 0x113fb0u;

    // 0x113fb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x113fb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x113fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x113fb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x113fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x113fbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x113fc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113fc8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x113fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x113fcc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x113fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x113fd0: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x113fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x113fd4: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x113fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x113fd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x113fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113fdc: 0x10020003  beq         $zero, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113FDCu;
    {
        const bool branch_taken_0x113fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x113fdc) {
            ctx->pc = 0x113FECu;
            goto label_113fec;
        }
    }
    ctx->pc = 0x113FE4u;
    // 0x113fe4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113fe8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x113fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_113fec:
    // 0x113fec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x113fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113ff0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x113ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113ff4: 0xc044da4  jal         func_113690
    ctx->pc = 0x113FF4u;
    SET_GPR_U32(ctx, 31, 0x113FFCu);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x113FF4u, 0x113FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FFCu;
label_113ffc:
    // 0x113ffc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x113ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114000: 0x1413004a  bne         $zero, $s3, . + 4 + (0x4A << 2)
    ctx->pc = 0x114000u;
    {
        const bool branch_taken_0x114000 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 19));
        if (branch_taken_0x114000) {
            ctx->pc = 0x11412Cu;
            goto label_11412c;
        }
    }
    ctx->pc = 0x114008u;
    // 0x114008: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x114008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x11400c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x11400Cu;
    SET_GPR_U32(ctx, 31, 0x114014u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11400Cu, 0x114014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114014u;
label_114014:
    // 0x114014: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x114014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x114018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11401c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x11401Cu;
    SET_GPR_U32(ctx, 31, 0x114024u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11401Cu, 0x114024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114024u;
label_114024:
    // 0x114024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x114024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114028: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x114028u;
    {
        const bool branch_taken_0x114028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x114028) {
            ctx->pc = 0x114040u;
            goto label_114040;
        }
    }
    ctx->pc = 0x114030u;
    // 0x114030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114034: 0xc0457c4  jal         func_115F10
    ctx->pc = 0x114034u;
    SET_GPR_U32(ctx, 31, 0x11403Cu);
    ctx->pc = 0x115F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F10u, 0x114034u, 0x11403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11403Cu;
label_11403c:
    // 0x11403c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11403cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114040:
    // 0x114040: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x114040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114044: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x114044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114048: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x114048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x11404c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x11404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114050: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x114050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x114054: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x114054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114058: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x114058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x11405c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x114060: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x114060u;
    SET_GPR_U32(ctx, 31, 0x114068u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x114060u, 0x114068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114068u;
label_114068:
    // 0x114068: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x114068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11406c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114070: 0xc0400e0  jal         func_100380
    ctx->pc = 0x114070u;
    SET_GPR_U32(ctx, 31, 0x114078u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x114070u, 0x114078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114078u;
label_114078:
    // 0x114078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11407c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11407Cu;
    {
        const bool branch_taken_0x11407c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11407c) {
            ctx->pc = 0x114094u;
            goto label_114094;
        }
    }
    ctx->pc = 0x114084u;
    // 0x114084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114088: 0xc088560  jal         func_221580
    ctx->pc = 0x114088u;
    SET_GPR_U32(ctx, 31, 0x114090u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x114088u, 0x114090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114090u;
label_114090:
    // 0x114090: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114094:
    // 0x114094: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x114094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x114098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11409c: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x11409cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x1140a0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1140a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1140a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1140A4u;
    {
        const bool branch_taken_0x1140a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1140a4) {
            ctx->pc = 0x1140C0u;
            goto label_1140c0;
        }
    }
    ctx->pc = 0x1140ACu;
    // 0x1140ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1140acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140b0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1140b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1140b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1140b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1140b8: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x1140B8u;
    SET_GPR_U32(ctx, 31, 0x1140C0u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x1140B8u, 0x1140C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140C0u;
label_1140c0:
    // 0x1140c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1140c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140c4: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x1140C4u;
    SET_GPR_U32(ctx, 31, 0x1140CCu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x1140C4u, 0x1140CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140CCu;
label_1140cc:
    // 0x1140cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1140ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140d0: 0x2405055d  addiu       $a1, $zero, 0x55D
    ctx->pc = 0x1140d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1373));
    // 0x1140d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1140d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140d8: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x1140D8u;
    SET_GPR_U32(ctx, 31, 0x1140E0u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x1140D8u, 0x1140E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140E0u;
label_1140e0:
    // 0x1140e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1140e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1140e4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1140e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1140e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1140e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1140ec: 0xc045054  jal         func_114150
    ctx->pc = 0x1140ECu;
    SET_GPR_U32(ctx, 31, 0x1140F4u);
    ctx->pc = 0x114150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114150u, 0x1140ECu, 0x1140F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140F4u;
label_1140f4:
    // 0x1140f4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1140f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1140f8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1140f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1140fc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1140fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114100: 0xc044da4  jal         func_113690
    ctx->pc = 0x114100u;
    SET_GPR_U32(ctx, 31, 0x114108u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x114100u, 0x114108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114108u;
label_114108:
    // 0x114108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11410c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x11410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114110: 0x10020003  beq         $zero, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114110u;
    {
        const bool branch_taken_0x114110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x114110) {
            ctx->pc = 0x114120u;
            goto label_114120;
        }
    }
    ctx->pc = 0x114118u;
    // 0x114118: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x114118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11411c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x11411cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_114120:
    // 0x114120: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x114120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x114124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114124u;
    {
        const bool branch_taken_0x114124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114124) {
            ctx->pc = 0x114130u;
            goto label_114130;
        }
    }
    ctx->pc = 0x11412Cu;
label_11412c:
    // 0x11412c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11412cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114130:
    // 0x114130: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x114130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114134: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x114134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114138: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x114138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11413c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11413cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x114140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114144: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x114144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x114148: 0x3e00008  jr          $ra
    ctx->pc = 0x114148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114150u;
}
