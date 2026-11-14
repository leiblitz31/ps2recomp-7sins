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

// Function: sub_0046EED0
// Address: 0x46eed0 - 0x46f0e0
void sub_0046EED0_0x46eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EED0_0x46eed0");
#endif

    switch (ctx->pc) {
        case 0x46ef00u: goto label_46ef00;
        case 0x46ef08u: goto label_46ef08;
        case 0x46ef20u: goto label_46ef20;
        case 0x46ef48u: goto label_46ef48;
        case 0x46ef64u: goto label_46ef64;
        case 0x46ef7cu: goto label_46ef7c;
        case 0x46ef8cu: goto label_46ef8c;
        case 0x46ef98u: goto label_46ef98;
        case 0x46efa4u: goto label_46efa4;
        case 0x46efccu: goto label_46efcc;
        case 0x46effcu: goto label_46effc;
        case 0x46f00cu: goto label_46f00c;
        case 0x46f024u: goto label_46f024;
        case 0x46f03cu: goto label_46f03c;
        case 0x46f048u: goto label_46f048;
        case 0x46f064u: goto label_46f064;
        case 0x46f078u: goto label_46f078;
        case 0x46f088u: goto label_46f088;
        case 0x46f09cu: goto label_46f09c;
        case 0x46f0acu: goto label_46f0ac;
        default: break;
    }

    ctx->pc = 0x46eed0u;

    // 0x46eed0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x46eed4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x46eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x46eed8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x46eedc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x46eee0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46eee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46eee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46eeec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46eef0: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x46eef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x46eef4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46eef8: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x46EEF8u;
    SET_GPR_U32(ctx, 31, 0x46EF00u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x46EEF8u, 0x46EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF00u;
label_46ef00:
    // 0x46ef00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46ef00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46ef04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ef08:
    // 0x46ef08: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46ef0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x46ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x46ef10: 0x94451ae8  lhu         $a1, 0x1AE8($v0)
    ctx->pc = 0x46ef10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x601AE8u));
    // 0x46ef14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x46ef14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef18: 0xc056628  jal         func_1598A0
    ctx->pc = 0x46EF18u;
    SET_GPR_U32(ctx, 31, 0x46EF20u);
    ctx->pc = 0x1598A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598A0u, 0x46EF18u, 0x46EF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF20u;
label_46ef20:
    // 0x46ef20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ef20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef24: 0x214082b  sltu        $at, $s0, $s4
    ctx->pc = 0x46ef24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x46ef28: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x46EF28u;
    {
        const bool branch_taken_0x46ef28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ef28) {
            ctx->pc = 0x46F0B4u;
            goto label_46f0b4;
        }
    }
    ctx->pc = 0x46EF30u;
    // 0x46ef30: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46ef34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x46ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x46ef38: 0x94451af0  lhu         $a1, 0x1AF0($v0)
    ctx->pc = 0x46ef38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x601AF0u));
    // 0x46ef3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46ef3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef40: 0xc056628  jal         func_1598A0
    ctx->pc = 0x46EF40u;
    SET_GPR_U32(ctx, 31, 0x46EF48u);
    ctx->pc = 0x1598A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598A0u, 0x46EF40u, 0x46EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF48u;
label_46ef48:
    // 0x46ef48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46ef48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef4c: 0x254082b  sltu        $at, $s2, $s4
    ctx->pc = 0x46ef4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x46ef50: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x46EF50u;
    {
        const bool branch_taken_0x46ef50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ef50) {
            ctx->pc = 0x46F0B4u;
            goto label_46f0b4;
        }
    }
    ctx->pc = 0x46EF58u;
    // 0x46ef58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46ef5c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x46EF5Cu;
    SET_GPR_U32(ctx, 31, 0x46EF64u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x46EF5Cu, 0x46EF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF64u;
label_46ef64:
    // 0x46ef64: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x46ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x46ef68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46ef6c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x46ef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46ef70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x46ef70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef74: 0xc056334  jal         func_158CD0
    ctx->pc = 0x46EF74u;
    SET_GPR_U32(ctx, 31, 0x46EF7Cu);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x46EF74u, 0x46EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF7Cu;
label_46ef7c:
    // 0x46ef7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46ef80: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x46ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46ef84: 0xc1194c4  jal         func_465310
    ctx->pc = 0x46EF84u;
    SET_GPR_U32(ctx, 31, 0x46EF8Cu);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x46EF84u, 0x46EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EF8Cu;
label_46ef8c:
    // 0x46ef8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46ef8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ef90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x46EF90u;
    {
        const bool branch_taken_0x46ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ef90) {
            ctx->pc = 0x46F018u;
            goto label_46f018;
        }
    }
    ctx->pc = 0x46EF98u;
label_46ef98:
    // 0x46ef98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46ef9c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x46EF9Cu;
    SET_GPR_U32(ctx, 31, 0x46EFA4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46EF9Cu, 0x46EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EFA4u;
label_46efa4:
    // 0x46efa4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x46efa8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x46efa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46efac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x46efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x46efb0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x46efb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x46efb4: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x46efb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x46efb8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x46EFB8u;
    {
        const bool branch_taken_0x46efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46efb8) {
            ctx->pc = 0x46EFE8u;
            goto label_46efe8;
        }
    }
    ctx->pc = 0x46EFC0u;
    // 0x46efc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46efc4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x46EFC4u;
    SET_GPR_U32(ctx, 31, 0x46EFCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46EFC4u, 0x46EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EFCCu;
label_46efcc:
    // 0x46efcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x46efd0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x46efd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46efd4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x46efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x46efd8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x46efd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x46efdc: 0x2841003a  slti        $at, $v0, 0x3A
    ctx->pc = 0x46efdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x46efe0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x46EFE0u;
    {
        const bool branch_taken_0x46efe0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46efe0) {
            ctx->pc = 0x46F014u;
            goto label_46f014;
        }
    }
    ctx->pc = 0x46EFE8u;
label_46efe8:
    // 0x46efe8: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x46efe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x46efec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46efecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46eff0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46eff4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46EFF4u;
    SET_GPR_U32(ctx, 31, 0x46EFFCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46EFF4u, 0x46EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46EFFCu;
label_46effc:
    // 0x46effc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46f000: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46f004: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x46F004u;
    SET_GPR_U32(ctx, 31, 0x46F00Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46F004u, 0x46F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F00Cu;
label_46f00c:
    // 0x46f00c: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x46F00Cu;
    {
        const bool branch_taken_0x46f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f00c) {
            ctx->pc = 0x46EF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ef08;
        }
    }
    ctx->pc = 0x46F014u;
label_46f014:
    // 0x46f014: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46f014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46f018:
    // 0x46f018: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46f018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46f01c: 0xc042514  jal         func_109450
    ctx->pc = 0x46F01Cu;
    SET_GPR_U32(ctx, 31, 0x46F024u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x46F01Cu, 0x46F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F024u;
label_46f024:
    // 0x46f024: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x46f024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46f028: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x46F028u;
    {
        const bool branch_taken_0x46f028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f028) {
            ctx->pc = 0x46EF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ef98;
        }
    }
    ctx->pc = 0x46F030u;
    // 0x46f030: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46f034: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x46F034u;
    SET_GPR_U32(ctx, 31, 0x46F03Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46F034u, 0x46F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F03Cu;
label_46f03c:
    // 0x46f03c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46f03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f040: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x46F040u;
    SET_GPR_U32(ctx, 31, 0x46F048u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x46F040u, 0x46F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F048u;
label_46f048:
    // 0x46f048: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x46f048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f04c: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x46f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x46f050: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x46f050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46f054: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46f054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46f058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46f058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f05c: 0xc059668  jal         func_1659A0
    ctx->pc = 0x46F05Cu;
    SET_GPR_U32(ctx, 31, 0x46F064u);
    ctx->pc = 0x1659A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659A0u, 0x46F05Cu, 0x46F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F064u;
label_46f064:
    // 0x46f064: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x46f064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x46f068: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46f06c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46f06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f070: 0xc11bc4c  jal         func_46F130
    ctx->pc = 0x46F070u;
    SET_GPR_U32(ctx, 31, 0x46F078u);
    ctx->pc = 0x46F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F130u, 0x46F070u, 0x46F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F078u;
label_46f078:
    // 0x46f078: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x46f078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x46f07c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46f080: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x46F080u;
    SET_GPR_U32(ctx, 31, 0x46F088u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x46F080u, 0x46F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F088u;
label_46f088:
    // 0x46f088: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46f088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f08c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46f090: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46f094: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46F094u;
    SET_GPR_U32(ctx, 31, 0x46F09Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46F094u, 0x46F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F09Cu;
label_46f09c:
    // 0x46f09c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x46f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46f0a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46f0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46f0a4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x46F0A4u;
    SET_GPR_U32(ctx, 31, 0x46F0ACu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46F0A4u, 0x46F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F0ACu;
label_46f0ac:
    // 0x46f0ac: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x46F0ACu;
    {
        const bool branch_taken_0x46f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f0ac) {
            ctx->pc = 0x46EF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ef08;
        }
    }
    ctx->pc = 0x46F0B4u;
label_46f0b4:
    // 0x46f0b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x46f0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46f0b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46f0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46f0bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46f0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46f0c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46f0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f0c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46f0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46f0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46f0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f0d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x46f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46f0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x46F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F0DCu;
    // 0x46f0dc: 0x0  nop
    ctx->pc = 0x46f0dcu;
    // NOP
    ctx->pc = 0x46f0e0u;
}
