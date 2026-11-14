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

// Function: sub_003F98C0
// Address: 0x3f98c0 - 0x3f9c30
void sub_003F98C0_0x3f98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F98C0_0x3f98c0");
#endif

    switch (ctx->pc) {
        case 0x3f98dcu: goto label_3f98dc;
        case 0x3f9920u: goto label_3f9920;
        case 0x3f996cu: goto label_3f996c;
        case 0x3f997cu: goto label_3f997c;
        case 0x3f99b0u: goto label_3f99b0;
        case 0x3f9b88u: goto label_3f9b88;
        case 0x3f9ba8u: goto label_3f9ba8;
        case 0x3f9bbcu: goto label_3f9bbc;
        case 0x3f9bd8u: goto label_3f9bd8;
        default: break;
    }

    ctx->pc = 0x3f98c0u;

    // 0x3f98c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f98c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f98c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f98c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f98c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f98c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f98cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f98ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f98d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f98d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f98d4: 0xc0f99d8  jal         func_3E6760
    ctx->pc = 0x3F98D4u;
    SET_GPR_U32(ctx, 31, 0x3F98DCu);
    ctx->pc = 0x3F98D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F98D4u;
    // 0x3f98d8: 0xae200114  sw          $zero, 0x114($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6760u, 0x3F98D4u, 0x3F98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F98DCu;
label_3f98dc:
    // 0x3f98dc: 0x92220207  lbu         $v0, 0x207($s1)
    ctx->pc = 0x3f98dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 519)));
    // 0x3f98e0: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x3F98E0u;
    {
        const bool branch_taken_0x3f98e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f98e0) {
            ctx->pc = 0x3F98E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F98E0u;
            // 0x3f98e4: 0xde220198  ld          $v0, 0x198($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F99B8u;
            goto label_3f99b8;
        }
    }
    ctx->pc = 0x3F98E8u;
    // 0x3f98e8: 0xde220108  ld          $v0, 0x108($s1)
    ctx->pc = 0x3f98e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x3f98ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3f98ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3f98f0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3F98F0u;
    {
        const bool branch_taken_0x3f98f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f98f0) {
            ctx->pc = 0x3F98F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F98F0u;
            // 0x3f98f4: 0xde220180  ld          $v0, 0x180($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9928u;
            goto label_3f9928;
        }
    }
    ctx->pc = 0x3F98F8u;
    // 0x3f98f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3f98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x3f98fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3f98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3f9900: 0x8c82e0f8  lw          $v0, -0x1F08($a0)
    ctx->pc = 0x3f9900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FE0F8u));
    // 0x3f9904: 0x8c66e118  lw          $a2, -0x1EE8($v1)
    ctx->pc = 0x3f9904u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FE118u));
    // 0x3f9908: 0xde240180  ld          $a0, 0x180($s1)
    ctx->pc = 0x3f9908u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x3f990c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3f990cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x3f9910: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3f9910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9914: 0x86202d  daddu       $a0, $a0, $a2
    ctx->pc = 0x3f9914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f9918: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3F9918u;
    SET_GPR_U32(ctx, 31, 0x3F9920u);
    ctx->pc = 0x3F991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9918u;
    // 0x3f991c: 0x82202f  dsubu       $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3F9918u, 0x3F9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9920u;
label_3f9920:
    // 0x3f9920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F9920u;
    {
        const bool branch_taken_0x3f9920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9920u;
        // 0x3f9924: 0xfe220188  sd          $v0, 0x188($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9920) {
            ctx->pc = 0x3F992Cu;
            goto label_3f992c;
        }
    }
    ctx->pc = 0x3F9928u;
label_3f9928:
    // 0x3f9928: 0xfe220188  sd          $v0, 0x188($s1)
    ctx->pc = 0x3f9928u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 2));
label_3f992c:
    // 0x3f992c: 0x92220208  lbu         $v0, 0x208($s1)
    ctx->pc = 0x3f992cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x3f9930: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3f9930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3f9934: 0x2463e0b8  addiu       $v1, $v1, -0x1F48
    ctx->pc = 0x3f9934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959288));
    // 0x3f9938: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3f9938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x3f993c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f993cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f9940: 0x2484e0d8  addiu       $a0, $a0, -0x1F28
    ctx->pc = 0x3f9940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959320));
    // 0x3f9944: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3f9944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f9948: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3f9948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3f994c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3f994cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f9950: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3f9950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f9954: 0xde240178  ld          $a0, 0x178($s1)
    ctx->pc = 0x3f9954u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x3f9958: 0x64c60001  daddiu      $a2, $a2, 0x1
    ctx->pc = 0x3f9958u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x3f995c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3f995cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9960: 0x87202d  daddu       $a0, $a0, $a3
    ctx->pc = 0x3f9960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f9964: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3F9964u;
    SET_GPR_U32(ctx, 31, 0x3F996Cu);
    ctx->pc = 0x3F9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9964u;
    // 0x3f9968: 0x86202f  dsubu       $a0, $a0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3F9964u, 0x3F996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F996Cu;
label_3f996c:
    // 0x3f996c: 0x9225020d  lbu         $a1, 0x20D($s1)
    ctx->pc = 0x3f996cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 525)));
    // 0x3f9970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f9970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9974: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F9974u;
    SET_GPR_U32(ctx, 31, 0x3F997Cu);
    ctx->pc = 0x3F9978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9974u;
    // 0x3f9978: 0xfe2201a8  sd          $v0, 0x1A8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 424), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F9974u, 0x3F997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F997Cu;
label_3f997c:
    // 0x3f997c: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f997cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f9980: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f9980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f9984: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3f9984u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x3f9988: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3f9988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f998c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3f998cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3f9990: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3f9990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3f9994: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3f9994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3f9998: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F9998u;
    {
        const bool branch_taken_0x3f9998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9998u;
        // 0x3f999c: 0xfe2301a0  sd          $v1, 0x1A0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9998) {
            ctx->pc = 0x3F99D0u;
            goto label_3f99d0;
        }
    }
    ctx->pc = 0x3F99A0u;
    // 0x3f99a0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f99a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f99a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f99a8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F99A8u;
    SET_GPR_U32(ctx, 31, 0x3F99B0u);
    ctx->pc = 0x3F99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F99A8u;
    // 0x3f99ac: 0x24a5f708  addiu       $a1, $a1, -0x8F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F99A8u, 0x3F99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F99B0u;
label_3f99b0:
    // 0x3f99b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F99B0u;
    {
        const bool branch_taken_0x3f99b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F99B0u;
        // 0x3f99b4: 0xde220108  ld          $v0, 0x108($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f99b0) {
            ctx->pc = 0x3F99D4u;
            goto label_3f99d4;
        }
    }
    ctx->pc = 0x3F99B8u;
label_3f99b8:
    // 0x3f99b8: 0xde230180  ld          $v1, 0x180($s1)
    ctx->pc = 0x3f99b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x3f99bc: 0xde240178  ld          $a0, 0x178($s1)
    ctx->pc = 0x3f99bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x3f99c0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3f99c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x3f99c4: 0xfe230188  sd          $v1, 0x188($s1)
    ctx->pc = 0x3f99c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 3));
    // 0x3f99c8: 0xfe2401a8  sd          $a0, 0x1A8($s1)
    ctx->pc = 0x3f99c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 424), GPR_U64(ctx, 4));
    // 0x3f99cc: 0xfe2201a0  sd          $v0, 0x1A0($s1)
    ctx->pc = 0x3f99ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 2));
label_3f99d0:
    // 0x3f99d0: 0xde220108  ld          $v0, 0x108($s1)
    ctx->pc = 0x3f99d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
label_3f99d4:
    // 0x3f99d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3f99d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f99d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f99d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3f99dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F99DCu;
    {
        const bool branch_taken_0x3f99dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F99DCu;
        // 0x3f99e0: 0x9230020d  lbu         $s0, 0x20D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 525)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f99dc) {
            ctx->pc = 0x3F99F8u;
            goto label_3f99f8;
        }
    }
    ctx->pc = 0x3F99E4u;
    // 0x3f99e4: 0x9222020b  lbu         $v0, 0x20B($s1)
    ctx->pc = 0x3f99e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 523)));
    // 0x3f99e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3f99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f99ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3f99ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f99f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3f99f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f99f4: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x3f99f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3f99f8:
    // 0x3f99f8: 0x30e21000  andi        $v0, $a3, 0x1000
    ctx->pc = 0x3f99f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
    // 0x3f99fc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F99FCu;
    {
        const bool branch_taken_0x3f99fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F99FCu;
        // 0x3f9a00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f99fc) {
            ctx->pc = 0x3F9A74u;
            goto label_3f9a74;
        }
    }
    ctx->pc = 0x3F9A04u;
    // 0x3f9a04: 0x9226020a  lbu         $a2, 0x20A($s1)
    ctx->pc = 0x3f9a04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 522)));
    // 0x3f9a08: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F9A08u;
    {
        const bool branch_taken_0x3f9a08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A08u;
        // 0x3f9a0c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a08) {
            ctx->pc = 0x3F9A20u;
            goto label_3f9a20;
        }
    }
    ctx->pc = 0x3F9A10u;
    // 0x3f9a10: 0x962301fe  lhu         $v1, 0x1FE($s1)
    ctx->pc = 0x3f9a10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3f9a14: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x3f9a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3f9a18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3F9A18u;
    {
        const bool branch_taken_0x3f9a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A18u;
        // 0x3f9a1c: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a18) {
            ctx->pc = 0x3F9A74u;
            goto label_3f9a74;
        }
    }
    ctx->pc = 0x3F9A20u;
label_3f9a20:
    // 0x3f9a20: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F9A20u;
    {
        const bool branch_taken_0x3f9a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A20u;
        // 0x3f9a24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a20) {
            ctx->pc = 0x3F9A48u;
            goto label_3f9a48;
        }
    }
    ctx->pc = 0x3F9A28u;
    // 0x3f9a28: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f9a2c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3f9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f9a30: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3f9a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3f9a34: 0x962501fe  lhu         $a1, 0x1FE($s1)
    ctx->pc = 0x3f9a34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3f9a38: 0x82800a  movz        $s0, $a0, $v0
    ctx->pc = 0x3f9a38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x3f9a3c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x3f9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3f9a40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F9A40u;
    {
        const bool branch_taken_0x3f9a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A40u;
        // 0x3f9a44: 0x65800b  movn        $s0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a40) {
            ctx->pc = 0x3F9A74u;
            goto label_3f9a74;
        }
    }
    ctx->pc = 0x3F9A48u;
label_3f9a48:
    // 0x3f9a48: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3F9A48u;
    {
        const bool branch_taken_0x3f9a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F9A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A48u;
        // 0x3f9a4c: 0x30e28000  andi        $v0, $a3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a48) {
            ctx->pc = 0x3F9A78u;
            goto label_3f9a78;
        }
    }
    ctx->pc = 0x3F9A50u;
    // 0x3f9a50: 0x962201fe  lhu         $v0, 0x1FE($s1)
    ctx->pc = 0x3f9a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3f9a54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9A54u;
    {
        const bool branch_taken_0x3f9a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A54u;
        // 0x3f9a58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a54) {
            ctx->pc = 0x3F9A74u;
            goto label_3f9a74;
        }
    }
    ctx->pc = 0x3F9A5Cu;
    // 0x3f9a5c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3f9a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3f9a60: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x3f9a60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3f9a64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F9A64u;
    {
        const bool branch_taken_0x3f9a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9a64) {
            ctx->pc = 0x3F9A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9A64u;
            // 0x3f9a68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9A6Cu;
            goto label_3f9a6c;
        }
    }
    ctx->pc = 0x3F9A6Cu;
label_3f9a6c:
    // 0x3f9a6c: 0x1812  mflo        $v1
    ctx->pc = 0x3f9a6cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3f9a70: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3f9a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3f9a74:
    // 0x3f9a74: 0x30e28000  andi        $v0, $a3, 0x8000
    ctx->pc = 0x3f9a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
label_3f9a78:
    // 0x3f9a78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3F9A78u;
    {
        const bool branch_taken_0x3f9a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A78u;
        // 0x3f9a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a78) {
            ctx->pc = 0x3F9AD4u;
            goto label_3f9ad4;
        }
    }
    ctx->pc = 0x3F9A80u;
    // 0x3f9a80: 0x9223020a  lbu         $v1, 0x20A($s1)
    ctx->pc = 0x3f9a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 522)));
    // 0x3f9a84: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F9A84u;
    {
        const bool branch_taken_0x3f9a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f9a84) {
            ctx->pc = 0x3F9A94u;
            goto label_3f9a94;
        }
    }
    ctx->pc = 0x3F9A8Cu;
    // 0x3f9a8c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3F9A8Cu;
    {
        const bool branch_taken_0x3f9a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A8Cu;
        // 0x3f9a90: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a8c) {
            ctx->pc = 0x3F9AD4u;
            goto label_3f9ad4;
        }
    }
    ctx->pc = 0x3F9A94u;
label_3f9a94:
    // 0x3f9a94: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F9A94u;
    {
        const bool branch_taken_0x3f9a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9A94u;
        // 0x3f9a98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9a94) {
            ctx->pc = 0x3F9AB8u;
            goto label_3f9ab8;
        }
    }
    ctx->pc = 0x3F9A9Cu;
    // 0x3f9a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f9a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9aa0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3f9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f9aa4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3f9aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f9aa8: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x3f9aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3f9aac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3f9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3f9ab0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F9AB0u;
    {
        const bool branch_taken_0x3f9ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AB0u;
        // 0x3f9ab4: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ab0) {
            ctx->pc = 0x3F9AD4u;
            goto label_3f9ad4;
        }
    }
    ctx->pc = 0x3F9AB8u;
label_3f9ab8:
    // 0x3f9ab8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9AB8u;
    {
        const bool branch_taken_0x3f9ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AB8u;
        // 0x3f9abc: 0x30e24000  andi        $v0, $a3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ab8) {
            ctx->pc = 0x3F9AD8u;
            goto label_3f9ad8;
        }
    }
    ctx->pc = 0x3F9AC0u;
    // 0x3f9ac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f9ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9ac4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3f9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3f9ac8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3f9ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f9acc: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x3f9accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3f9ad0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3f9ad0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3f9ad4:
    // 0x3f9ad4: 0x30e24000  andi        $v0, $a3, 0x4000
    ctx->pc = 0x3f9ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
label_3f9ad8:
    // 0x3f9ad8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F9AD8u;
    {
        const bool branch_taken_0x3f9ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AD8u;
        // 0x3f9adc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ad8) {
            ctx->pc = 0x3F9B50u;
            goto label_3f9b50;
        }
    }
    ctx->pc = 0x3F9AE0u;
    // 0x3f9ae0: 0x962201fe  lhu         $v0, 0x1FE($s1)
    ctx->pc = 0x3f9ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 510)));
    // 0x3f9ae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F9AE4u;
    {
        const bool branch_taken_0x3f9ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AE4u;
        // 0x3f9ae8: 0x30e21000  andi        $v0, $a3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9ae4) {
            ctx->pc = 0x3F9AF4u;
            goto label_3f9af4;
        }
    }
    ctx->pc = 0x3F9AECu;
    // 0x3f9aec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F9AECu;
    {
        const bool branch_taken_0x3f9aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AECu;
        // 0x3f9af0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9aec) {
            ctx->pc = 0x3F9B14u;
            goto label_3f9b14;
        }
    }
    ctx->pc = 0x3F9AF4u;
label_3f9af4:
    // 0x3f9af4: 0x30e28000  andi        $v0, $a3, 0x8000
    ctx->pc = 0x3f9af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x3f9af8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9AF8u;
    {
        const bool branch_taken_0x3f9af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9AF8u;
        // 0x3f9afc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9af8) {
            ctx->pc = 0x3F9B14u;
            goto label_3f9b14;
        }
    }
    ctx->pc = 0x3F9B00u;
    // 0x3f9b00: 0x9223020a  lbu         $v1, 0x20A($s1)
    ctx->pc = 0x3f9b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 522)));
    // 0x3f9b04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f9b08: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9B08u;
    {
        const bool branch_taken_0x3f9b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f9b08) {
            ctx->pc = 0x3F9B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9B08u;
            // 0x3f9b0c: 0x2a020009  slti        $v0, $s0, 0x9 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9B28u;
            goto label_3f9b28;
        }
    }
    ctx->pc = 0x3F9B10u;
    // 0x3f9b10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f9b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f9b14:
    // 0x3f9b14: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3f9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3f9b18: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3f9b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f9b1c: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x3f9b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3f9b20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3F9B20u;
    {
        const bool branch_taken_0x3f9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B20u;
        // 0x3f9b24: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b20) {
            ctx->pc = 0x3F9B48u;
            goto label_3f9b48;
        }
    }
    ctx->pc = 0x3F9B28u;
label_3f9b28:
    // 0x3f9b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9B28u;
    {
        const bool branch_taken_0x3f9b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B28u;
        // 0x3f9b2c: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b28) {
            ctx->pc = 0x3F9B3Cu;
            goto label_3f9b3c;
        }
    }
    ctx->pc = 0x3F9B30u;
    // 0x3f9b30: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x3f9b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x3f9b34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9B34u;
    {
        const bool branch_taken_0x3f9b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9B34u;
        // 0x3f9b38: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9b34) {
            ctx->pc = 0x3F9B48u;
            goto label_3f9b48;
        }
    }
    ctx->pc = 0x3F9B3Cu;
label_3f9b3c:
    // 0x3f9b3c: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x3f9b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x3f9b40: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x3f9b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3f9b44: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3f9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3f9b48:
    // 0x3f9b48: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x3f9b48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x3f9b4c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3f9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3f9b50:
    // 0x3f9b50: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3f9b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3f9b54: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9B54u;
    {
        const bool branch_taken_0x3f9b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9b54) {
            ctx->pc = 0x3F9B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9B54u;
            // 0x3f9b58: 0xde240178  ld          $a0, 0x178($s1) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9B74u;
            goto label_3f9b74;
        }
    }
    ctx->pc = 0x3F9B5Cu;
    // 0x3f9b5c: 0x922200f4  lbu         $v0, 0xF4($s1)
    ctx->pc = 0x3f9b5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x3f9b60: 0x922300f5  lbu         $v1, 0xF5($s1)
    ctx->pc = 0x3f9b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 245)));
    // 0x3f9b64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3f9b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3f9b68: 0x202202a  slt         $a0, $s0, $v0
    ctx->pc = 0x3f9b68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f9b6c: 0x44800b  movn        $s0, $v0, $a0
    ctx->pc = 0x3f9b6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x3f9b70: 0xde240178  ld          $a0, 0x178($s1)
    ctx->pc = 0x3f9b70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 376)));
label_3f9b74:
    // 0x3f9b74: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x3f9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x3f9b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f9b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9b7c: 0x64840007  daddiu      $a0, $a0, 0x7
    ctx->pc = 0x3f9b7cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)7);
    // 0x3f9b80: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F9B80u;
    SET_GPR_U32(ctx, 31, 0x3F9B88u);
    ctx->pc = 0x3F9B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9B80u;
    // 0x3f9b84: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F9B80u, 0x3F9B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9B88u;
label_3f9b88:
    // 0x3f9b88: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x3f9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x3f9b8c: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f9b8cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f9b90: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3f9b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3f9b94: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f9b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f9b98: 0x64650001  daddiu      $a1, $v1, 0x1
    ctx->pc = 0x3f9b98u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x3f9b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f9b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9ba0: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F9BA0u;
    SET_GPR_U32(ctx, 31, 0x3F9BA8u);
    ctx->pc = 0x3F9BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BA0u;
    // 0x3f9ba4: 0x45282d  daddu       $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F9BA0u, 0x3F9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BA8u;
label_3f9ba8:
    // 0x3f9ba8: 0xde250198  ld          $a1, 0x198($s1)
    ctx->pc = 0x3f9ba8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x3f9bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f9bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9bb0: 0xae2201bc  sw          $v0, 0x1BC($s1)
    ctx->pc = 0x3f9bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 2));
    // 0x3f9bb4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F9BB4u;
    SET_GPR_U32(ctx, 31, 0x3F9BBCu);
    ctx->pc = 0x3F9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BB4u;
    // 0x3f9bb8: 0x64a50001  daddiu      $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F9BB4u, 0x3F9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BBCu;
label_3f9bbc:
    // 0x3f9bbc: 0xde270198  ld          $a3, 0x198($s1)
    ctx->pc = 0x3f9bbcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x3f9bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f9bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9bc8: 0xae2201b8  sw          $v0, 0x1B8($s1)
    ctx->pc = 0x3f9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 2));
    // 0x3f9bcc: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3f9bccu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3f9bd0: 0xc0f8b4e  jal         func_3E2D38
    ctx->pc = 0x3F9BD0u;
    SET_GPR_U32(ctx, 31, 0x3F9BD8u);
    ctx->pc = 0x3F9BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9BD0u;
    // 0x3f9bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2D38u, 0x3F9BD0u, 0x3F9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9BD8u;
label_3f9bd8:
    // 0x3f9bd8: 0xde230100  ld          $v1, 0x100($s1)
    ctx->pc = 0x3f9bd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x3f9bdc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3f9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3f9be0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f9be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9be4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f9be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f9be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f9be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f9bec: 0xfe230100  sd          $v1, 0x100($s1)
    ctx->pc = 0x3f9becu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 256), GPR_U64(ctx, 3));
    // 0x3f9bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9BF4u;
        // 0x3f9bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9BFCu;
    // 0x3f9bfc: 0x0  nop
    ctx->pc = 0x3f9bfcu;
    // NOP
    // 0x3f9c00: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3f9c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f9c04: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3f9c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3f9c08: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3f9c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3f9c0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f9c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f9c10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f9c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f9c14: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x3f9c14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3f9c18: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f9c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f9c1c: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x3f9c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x3f9c20: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f9c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f9c24: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9C24u;
        // 0x3f9c28: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9C2Cu;
    // 0x3f9c2c: 0x0  nop
    ctx->pc = 0x3f9c2cu;
    // NOP
    ctx->pc = 0x3f9c30u;
}
