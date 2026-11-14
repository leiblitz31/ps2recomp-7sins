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

// Function: sub_00303030
// Address: 0x303030 - 0x303178
void sub_00303030_0x303030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303030_0x303030");
#endif

    switch (ctx->pc) {
        case 0x303060u: goto label_303060;
        case 0x3030a0u: goto label_3030a0;
        case 0x3030b0u: goto label_3030b0;
        case 0x3030b8u: goto label_3030b8;
        case 0x3030ccu: goto label_3030cc;
        case 0x3030dcu: goto label_3030dc;
        case 0x3030ecu: goto label_3030ec;
        case 0x3030f4u: goto label_3030f4;
        case 0x303108u: goto label_303108;
        case 0x303114u: goto label_303114;
        case 0x303128u: goto label_303128;
        case 0x303144u: goto label_303144;
        default: break;
    }

    ctx->pc = 0x303030u;

    // 0x303030: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x303030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x303034: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x303034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x303038: 0x24a5aac0  addiu       $a1, $a1, -0x5540
    ctx->pc = 0x303038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945472));
    // 0x30303c: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x30303cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x303040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303044: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x303044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x303048: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x303048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30304c: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x30304cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x303050: 0x26941f80  addiu       $s4, $s4, 0x1F80
    ctx->pc = 0x303050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8064));
    // 0x303054: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x303054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x303058: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x303058u;
    SET_GPR_U32(ctx, 31, 0x303060u);
    ctx->pc = 0x30305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303058u;
    // 0x30305c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x303058u, 0x303060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303060u;
label_303060:
    // 0x303060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x303060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303064: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x303064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x303068: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x303068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30306c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x30306cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x303070: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x303070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x303074: 0x26c42a40  addiu       $a0, $s6, 0x2A40
    ctx->pc = 0x303074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 10816));
    // 0x303078: 0x27c71340  addiu       $a3, $fp, 0x1340
    ctx->pc = 0x303078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4928));
    // 0x30307c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303080: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x303080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x303084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303088: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x303088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x30308c: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x303090: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x303090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303094: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x303094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303098: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x303098u;
    SET_GPR_U32(ctx, 31, 0x3030A0u);
    ctx->pc = 0x30309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303098u;
    // 0x30309c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x303098u, 0x3030A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030A0u;
label_3030a0:
    // 0x3030a0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3030A0u;
    {
        const bool branch_taken_0x3030a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3030A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030A0u;
        // 0x3030a4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030a0) {
            ctx->pc = 0x3030C0u;
            goto label_3030c0;
        }
    }
    ctx->pc = 0x3030A8u;
    // 0x3030a8: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3030A8u;
    SET_GPR_U32(ctx, 31, 0x3030B0u);
    ctx->pc = 0x3030ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030A8u;
    // 0x3030ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3030A8u, 0x3030B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030B0u;
label_3030b0:
    // 0x3030b0: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3030B0u;
    SET_GPR_U32(ctx, 31, 0x3030B8u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3030B0u, 0x3030B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030B8u;
label_3030b8:
    // 0x3030b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3030B8u;
    {
        const bool branch_taken_0x3030b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3030BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030B8u;
        // 0x3030bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030b8) {
            ctx->pc = 0x303148u;
            goto label_303148;
        }
    }
    ctx->pc = 0x3030C0u;
label_3030c0:
    // 0x3030c0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3030c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3030c4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x3030C4u;
    SET_GPR_U32(ctx, 31, 0x3030CCu);
    ctx->pc = 0x3030C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030C4u;
    // 0x3030c8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x3030C4u, 0x3030CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030CCu;
label_3030cc:
    // 0x3030cc: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3030CCu;
    {
        const bool branch_taken_0x3030cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3030cc) {
            ctx->pc = 0x3030E4u;
            goto label_3030e4;
        }
    }
    ctx->pc = 0x3030D4u;
    // 0x3030d4: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3030D4u;
    SET_GPR_U32(ctx, 31, 0x3030DCu);
    ctx->pc = 0x3030D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030D4u;
    // 0x3030d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3030D4u, 0x3030DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030DCu;
label_3030dc:
    // 0x3030dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3030DCu;
    {
        const bool branch_taken_0x3030dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3030E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030DCu;
        // 0x3030e0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030dc) {
            ctx->pc = 0x303148u;
            goto label_303148;
        }
    }
    ctx->pc = 0x3030E4u;
label_3030e4:
    // 0x3030e4: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3030E4u;
    SET_GPR_U32(ctx, 31, 0x3030ECu);
    ctx->pc = 0x3030E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030E4u;
    // 0x3030e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3030E4u, 0x3030ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030ECu;
label_3030ec:
    // 0x3030ec: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x3030ECu;
    SET_GPR_U32(ctx, 31, 0x3030F4u);
    ctx->pc = 0x3030F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3030ECu;
    // 0x3030f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3030ECu, 0x3030F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3030F4u;
label_3030f4:
    // 0x3030f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3030f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3030f8: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3030F8u;
    {
        const bool branch_taken_0x3030f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3030FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3030F8u;
        // 0x3030fc: 0x3c10004f  lui         $s0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3030f8) {
            ctx->pc = 0x30311Cu;
            goto label_30311c;
        }
    }
    ctx->pc = 0x303100u;
    // 0x303100: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x303100u;
    SET_GPR_U32(ctx, 31, 0x303108u);
    ctx->pc = 0x303104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303100u;
    // 0x303104: 0x8e040c28  lw          $a0, 0xC28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x303100u, 0x303108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303108u;
label_303108:
    // 0x303108: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x303108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x30310c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30310Cu;
    SET_GPR_U32(ctx, 31, 0x303114u);
    ctx->pc = 0x303110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30310Cu;
    // 0x303110: 0x8e040c28  lw          $a0, 0xC28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30310Cu, 0x303114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303114u;
label_303114:
    // 0x303114: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x303114u;
    {
        const bool branch_taken_0x303114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303114u;
        // 0x303118: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303114) {
            ctx->pc = 0x303148u;
            goto label_303148;
        }
    }
    ctx->pc = 0x30311Cu;
label_30311c:
    // 0x30311c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x30311cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303120: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x303120u;
    SET_GPR_U32(ctx, 31, 0x303128u);
    ctx->pc = 0x303124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303120u;
    // 0x303124: 0x8e040c28  lw          $a0, 0xC28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x303120u, 0x303128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303128u;
label_303128:
    // 0x303128: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x303128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30312c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x30312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303130: 0x8e040c28  lw          $a0, 0xC28($s0)
    ctx->pc = 0x303130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3112)));
    // 0x303134: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x303134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x303138: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x303138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x30313c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x30313Cu;
    SET_GPR_U32(ctx, 31, 0x303144u);
    ctx->pc = 0x303140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30313Cu;
    // 0x303140: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x30313Cu, 0x303144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303144u;
label_303144:
    // 0x303144: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x303144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303148:
    // 0x303148: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x303148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x30314c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x30314cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x303150: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x303150u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x303154: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x303154u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x303158: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x303158u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30315c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x30315cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x303160: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x303160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303164: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x303164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303168: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x303168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30316c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x30316cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303170: 0x3e00008  jr          $ra
    ctx->pc = 0x303170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303170u;
        // 0x303174: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303178u;
}
