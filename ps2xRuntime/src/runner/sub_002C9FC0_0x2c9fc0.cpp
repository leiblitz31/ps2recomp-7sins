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

// Function: sub_002C9FC0
// Address: 0x2c9fc0 - 0x2ca1f0
void sub_002C9FC0_0x2c9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9FC0_0x2c9fc0");
#endif

    switch (ctx->pc) {
        case 0x2c9ffcu: goto label_2c9ffc;
        case 0x2ca018u: goto label_2ca018;
        case 0x2ca028u: goto label_2ca028;
        case 0x2ca048u: goto label_2ca048;
        case 0x2ca064u: goto label_2ca064;
        case 0x2ca07cu: goto label_2ca07c;
        case 0x2ca094u: goto label_2ca094;
        case 0x2ca0acu: goto label_2ca0ac;
        case 0x2ca0ccu: goto label_2ca0cc;
        case 0x2ca0e8u: goto label_2ca0e8;
        case 0x2ca10cu: goto label_2ca10c;
        case 0x2ca120u: goto label_2ca120;
        case 0x2ca13cu: goto label_2ca13c;
        case 0x2ca188u: goto label_2ca188;
        case 0x2ca198u: goto label_2ca198;
        case 0x2ca1b4u: goto label_2ca1b4;
        default: break;
    }

    ctx->pc = 0x2c9fc0u;

    // 0x2c9fc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c9fc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c9fc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c9fcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c9fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c9fd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c9fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c9fd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c9fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c9fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c9fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9fec: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2c9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2c9ff0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c9ff4: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2C9FF4u;
    SET_GPR_U32(ctx, 31, 0x2C9FFCu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2C9FF4u, 0x2C9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FFCu;
label_2c9ffc:
    // 0x2c9ffc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c9ffcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca000: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA000u;
    {
        const bool branch_taken_0x2ca000 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca000) {
            ctx->pc = 0x2CA03Cu;
            goto label_2ca03c;
        }
    }
    ctx->pc = 0x2CA008u;
    // 0x2ca008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca00c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ca010: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA010u;
    SET_GPR_U32(ctx, 31, 0x2CA018u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA010u, 0x2CA018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA018u;
label_2ca018:
    // 0x2ca018: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ca018u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca01c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ca01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca020: 0xc0482f0  jal         func_120BC0
    ctx->pc = 0x2CA020u;
    SET_GPR_U32(ctx, 31, 0x2CA028u);
    ctx->pc = 0x120BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120BC0u, 0x2CA020u, 0x2CA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA028u;
label_2ca028:
    // 0x2ca028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA028u;
    {
        const bool branch_taken_0x2ca028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca028) {
            ctx->pc = 0x2CA03Cu;
            goto label_2ca03c;
        }
    }
    ctx->pc = 0x2CA030u;
    // 0x2ca030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca034: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2CA034u;
    {
        const bool branch_taken_0x2ca034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca034) {
            ctx->pc = 0x2CA1B8u;
            goto label_2ca1b8;
        }
    }
    ctx->pc = 0x2CA03Cu;
label_2ca03c:
    // 0x2ca03c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2ca03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca040: 0xc096880  jal         func_25A200
    ctx->pc = 0x2CA040u;
    SET_GPR_U32(ctx, 31, 0x2CA048u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CA040u, 0x2CA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA048u;
label_2ca048:
    // 0x2ca048: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ca048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca04c: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CA04Cu;
    {
        const bool branch_taken_0x2ca04c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca04c) {
            ctx->pc = 0x2CA0C0u;
            goto label_2ca0c0;
        }
    }
    ctx->pc = 0x2CA054u;
    // 0x2ca054: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ca054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca058: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2ca058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ca05c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA05Cu;
    SET_GPR_U32(ctx, 31, 0x2CA064u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA05Cu, 0x2CA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA064u;
label_2ca064:
    // 0x2ca064: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ca064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca068: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA068u;
    {
        const bool branch_taken_0x2ca068 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca068) {
            ctx->pc = 0x2CA0C0u;
            goto label_2ca0c0;
        }
    }
    ctx->pc = 0x2CA070u;
    // 0x2ca070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca074: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2CA074u;
    SET_GPR_U32(ctx, 31, 0x2CA07Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2CA074u, 0x2CA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA07Cu;
label_2ca07c:
    // 0x2ca07c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ca07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca080: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA080u;
    {
        const bool branch_taken_0x2ca080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca080) {
            ctx->pc = 0x2CA0C0u;
            goto label_2ca0c0;
        }
    }
    ctx->pc = 0x2CA088u;
    // 0x2ca088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca08c: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2CA08Cu;
    SET_GPR_U32(ctx, 31, 0x2CA094u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CA08Cu, 0x2CA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA094u;
label_2ca094:
    // 0x2ca094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca098: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ca098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca09c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ca09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca0a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ca0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca0a4: 0xc09a060  jal         func_268180
    ctx->pc = 0x2CA0A4u;
    SET_GPR_U32(ctx, 31, 0x2CA0ACu);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x2CA0A4u, 0x2CA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0ACu;
label_2ca0ac:
    // 0x2ca0ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA0ACu;
    {
        const bool branch_taken_0x2ca0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca0ac) {
            ctx->pc = 0x2CA0C0u;
            goto label_2ca0c0;
        }
    }
    ctx->pc = 0x2CA0B4u;
    // 0x2ca0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2CA0B8u;
    {
        const bool branch_taken_0x2ca0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca0b8) {
            ctx->pc = 0x2CA1B8u;
            goto label_2ca1b8;
        }
    }
    ctx->pc = 0x2CA0C0u;
label_2ca0c0:
    // 0x2ca0c0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2ca0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca0c4: 0xc096f0c  jal         func_25BC30
    ctx->pc = 0x2CA0C4u;
    SET_GPR_U32(ctx, 31, 0x2CA0CCu);
    ctx->pc = 0x25BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC30u, 0x2CA0C4u, 0x2CA0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0CCu;
label_2ca0cc:
    // 0x2ca0cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ca0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca0d4: 0x10020037  beq         $zero, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2CA0D4u;
    {
        const bool branch_taken_0x2ca0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ca0d4) {
            ctx->pc = 0x2CA1B4u;
            goto label_2ca1b4;
        }
    }
    ctx->pc = 0x2CA0DCu;
    // 0x2ca0dc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2ca0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca0e0: 0xc096880  jal         func_25A200
    ctx->pc = 0x2CA0E0u;
    SET_GPR_U32(ctx, 31, 0x2CA0E8u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CA0E0u, 0x2CA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0E8u;
label_2ca0e8:
    // 0x2ca0e8: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2ca0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca0ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ca0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca0f0: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2CA0F0u;
    {
        const bool branch_taken_0x2ca0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ca0f0) {
            ctx->pc = 0x2CA1B4u;
            goto label_2ca1b4;
        }
    }
    ctx->pc = 0x2CA0F8u;
    // 0x2ca0f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ca0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca0fc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ca0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2ca100: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ca100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ca104: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CA104u;
    SET_GPR_U32(ctx, 31, 0x2CA10Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CA104u, 0x2CA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA10Cu;
label_2ca10c:
    // 0x2ca10c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ca10cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca110: 0x241e0064  addiu       $fp, $zero, 0x64
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ca114: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ca114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ca118: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x2CA118u;
    SET_GPR_U32(ctx, 31, 0x2CA120u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2CA118u, 0x2CA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA120u;
label_2ca120:
    // 0x2ca120: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ca120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca124: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ca124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ca128: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ca128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ca12c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2ca12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca130: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ca130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca134: 0xc09b364  jal         func_26CD90
    ctx->pc = 0x2CA134u;
    SET_GPR_U32(ctx, 31, 0x2CA13Cu);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x2CA134u, 0x2CA13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA13Cu;
label_2ca13c:
    // 0x2ca13c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CA13Cu;
    {
        const bool branch_taken_0x2ca13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca13c) {
            ctx->pc = 0x2CA1A4u;
            goto label_2ca1a4;
        }
    }
    ctx->pc = 0x2CA144u;
    // 0x2ca144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca148: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2ca148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca14c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2ca14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ca150: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ca150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca158: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA158u;
    {
        const bool branch_taken_0x2ca158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca158) {
            ctx->pc = 0x2CA168u;
            goto label_2ca168;
        }
    }
    ctx->pc = 0x2CA160u;
    // 0x2ca160: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2ca160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2ca164: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2ca164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ca168:
    // 0x2ca168: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ca168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca16c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2ca16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2ca170: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2ca170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2ca174: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ca174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ca178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ca178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca17c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2ca17cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca180: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2CA180u;
    SET_GPR_U32(ctx, 31, 0x2CA188u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2CA180u, 0x2CA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA188u;
label_2ca188:
    // 0x2ca188: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2ca188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca190: 0xc096eec  jal         func_25BBB0
    ctx->pc = 0x2CA190u;
    SET_GPR_U32(ctx, 31, 0x2CA198u);
    ctx->pc = 0x25BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBB0u, 0x2CA190u, 0x2CA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA198u;
label_2ca198:
    // 0x2ca198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca19c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA19Cu;
    {
        const bool branch_taken_0x2ca19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca19c) {
            ctx->pc = 0x2CA1B8u;
            goto label_2ca1b8;
        }
    }
    ctx->pc = 0x2CA1A4u;
label_2ca1a4:
    // 0x2ca1a4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2ca1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ca1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1ac: 0xc096eec  jal         func_25BBB0
    ctx->pc = 0x2CA1ACu;
    SET_GPR_U32(ctx, 31, 0x2CA1B4u);
    ctx->pc = 0x25BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBB0u, 0x2CA1ACu, 0x2CA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1B4u;
label_2ca1b4:
    // 0x2ca1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1b8:
    // 0x2ca1b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ca1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ca1bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ca1bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ca1c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ca1c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca1c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ca1c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca1c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ca1c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca1cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ca1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca1d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ca1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca1d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca1e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2ca1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ca1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA1ECu;
    // 0x2ca1ec: 0x0  nop
    ctx->pc = 0x2ca1ecu;
    // NOP
    ctx->pc = 0x2ca1f0u;
}
