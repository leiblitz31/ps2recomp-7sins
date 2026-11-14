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

// Function: sub_001C0900
// Address: 0x1c0900 - 0x1c0a90
void sub_001C0900_0x1c0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0900_0x1c0900");
#endif

    switch (ctx->pc) {
        case 0x1c09b4u: goto label_1c09b4;
        case 0x1c09c0u: goto label_1c09c0;
        case 0x1c09ccu: goto label_1c09cc;
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c0a08u: goto label_1c0a08;
        default: break;
    }

    ctx->pc = 0x1c0900u;

    // 0x1c0900: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c0904: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c0908: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c0908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c090c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0914: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c091c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0924: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1c0924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1c0928: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x1c0928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x1c092c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1c092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1c0930: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x1c0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x1c0934: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0938: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c093c: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C093Cu;
    {
        const bool branch_taken_0x1c093c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c093c) {
            ctx->pc = 0x1C0964u;
            goto label_1c0964;
        }
    }
    ctx->pc = 0x1C0944u;
    // 0x1c0944: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c0948: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c0948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c094c: 0x8c42be74  lw          $v0, -0x418C($v0)
    ctx->pc = 0x1c094cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE74u));
    // 0x1c0950: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c0950u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0954: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0954u;
    {
        const bool branch_taken_0x1c0954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0954) {
            ctx->pc = 0x1C0964u;
            goto label_1c0964;
        }
    }
    ctx->pc = 0x1C095Cu;
    // 0x1c095c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0960: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1c0960u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c0964:
    // 0x1c0964: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0964u;
    {
        const bool branch_taken_0x1c0964 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0964) {
            ctx->pc = 0x1C097Cu;
            goto label_1c097c;
        }
    }
    ctx->pc = 0x1C096Cu;
    // 0x1c096c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0970: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1c0970u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0974u;
    {
        const bool branch_taken_0x1c0974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0974) {
            ctx->pc = 0x1C0980u;
            goto label_1c0980;
        }
    }
    ctx->pc = 0x1C097Cu;
label_1c097c:
    // 0x1c097c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c097cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0980:
    // 0x1c0980: 0x327600ff  andi        $s6, $s3, 0xFF
    ctx->pc = 0x1c0980u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1c0984: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0984u;
    {
        const bool branch_taken_0x1c0984 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0984) {
            ctx->pc = 0x1C0998u;
            goto label_1c0998;
        }
    }
    ctx->pc = 0x1C098Cu;
    // 0x1c098c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c098cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0990: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C0990u;
    {
        const bool branch_taken_0x1c0990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0990) {
            ctx->pc = 0x1C0A60u;
            goto label_1c0a60;
        }
    }
    ctx->pc = 0x1C0998u;
label_1c0998:
    // 0x1c0998: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c099c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c099cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c09a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09a4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c09a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c09a8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c09ac: 0xc06f2a4  jal         func_1BCA90
    ctx->pc = 0x1C09ACu;
    SET_GPR_U32(ctx, 31, 0x1C09B4u);
    ctx->pc = 0x1BCA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA90u, 0x1C09ACu, 0x1C09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09B4u;
label_1c09b4:
    // 0x1c09b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c09b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C09B8u;
    {
        const bool branch_taken_0x1c09b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09b8) {
            ctx->pc = 0x1C0A50u;
            goto label_1c0a50;
        }
    }
    ctx->pc = 0x1C09C0u;
label_1c09c0:
    // 0x1c09c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c09c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C09C4u;
    {
        const bool branch_taken_0x1c09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09c4) {
            ctx->pc = 0x1C0A40u;
            goto label_1c0a40;
        }
    }
    ctx->pc = 0x1C09CCu;
label_1c09cc:
    // 0x1c09cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1c09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c09d0: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C09D0u;
    {
        const bool branch_taken_0x1c09d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c09d0) {
            ctx->pc = 0x1C0A14u;
            goto label_1c0a14;
        }
    }
    ctx->pc = 0x1C09D8u;
    // 0x1c09d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c09dc: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C0A14u;
            goto label_1c0a14;
        }
    }
    ctx->pc = 0x1C09E4u;
    // 0x1c09e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c09e8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c09ec: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1c09f0: 0xc06ea80  jal         func_1BAA00
    ctx->pc = 0x1C09F0u;
    SET_GPR_U32(ctx, 31, 0x1C09F8u);
    ctx->pc = 0x1BAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA00u, 0x1C09F0u, 0x1C09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09F8u;
label_1c09f8:
    // 0x1c09f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c09f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a00: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1C0A00u;
    SET_GPR_U32(ctx, 31, 0x1C0A08u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1C0A00u, 0x1C0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A08u;
label_1c0a08:
    // 0x1c0a08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0a0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0A0Cu;
    {
        const bool branch_taken_0x1c0a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a0c) {
            ctx->pc = 0x1C0A60u;
            goto label_1c0a60;
        }
    }
    ctx->pc = 0x1C0A14u;
label_1c0a14:
    // 0x1c0a14: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c0a18: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c0a1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c0a20: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0a24: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1c0a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c0a28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c0a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c0a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a30: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0A30u;
    {
        const bool branch_taken_0x1c0a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0a30) {
            ctx->pc = 0x1C0A3Cu;
            goto label_1c0a3c;
        }
    }
    ctx->pc = 0x1C0A38u;
    // 0x1c0a38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c0a3c:
    // 0x1c0a3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0a40:
    // 0x1c0a40: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1c0a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0a44: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C0A44u;
    {
        const bool branch_taken_0x1c0a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a44) {
            ctx->pc = 0x1C09CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c09cc;
        }
    }
    ctx->pc = 0x1C0A4Cu;
    // 0x1c0a4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c0a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c0a50:
    // 0x1c0a50: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1c0a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c0a54: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C0A54u;
    {
        const bool branch_taken_0x1c0a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a54) {
            ctx->pc = 0x1C09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c09c0;
        }
    }
    ctx->pc = 0x1C0A5Cu;
    // 0x1c0a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a60:
    // 0x1c0a60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c0a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0a64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c0a64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0a68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c0a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0a6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c0a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0a70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0a80: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c0a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0A8Cu;
    // 0x1c0a8c: 0x0  nop
    ctx->pc = 0x1c0a8cu;
    // NOP
    ctx->pc = 0x1c0a90u;
}
