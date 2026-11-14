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

// Function: sub_001FE680
// Address: 0x1fe680 - 0x1fe8f0
void sub_001FE680_0x1fe680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE680_0x1fe680");
#endif

    switch (ctx->pc) {
        case 0x1fe6b8u: goto label_1fe6b8;
        case 0x1fe6c8u: goto label_1fe6c8;
        case 0x1fe6ecu: goto label_1fe6ec;
        case 0x1fe6f8u: goto label_1fe6f8;
        case 0x1fe718u: goto label_1fe718;
        case 0x1fe72cu: goto label_1fe72c;
        case 0x1fe744u: goto label_1fe744;
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe85cu: goto label_1fe85c;
        case 0x1fe874u: goto label_1fe874;
        case 0x1fe880u: goto label_1fe880;
        case 0x1fe894u: goto label_1fe894;
        case 0x1fe8a4u: goto label_1fe8a4;
        case 0x1fe8b4u: goto label_1fe8b4;
        case 0x1fe8c4u: goto label_1fe8c4;
        default: break;
    }

    ctx->pc = 0x1fe680u;

    // 0x1fe680: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fe680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1fe684: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fe684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fe688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe694: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1fe694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1fe698: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1fe698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1fe69c: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1fe69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1fe6a0: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x1fe6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x1fe6a4: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x1fe6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x1fe6a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fe6ac: 0x27859994  addiu       $a1, $gp, -0x666C
    ctx->pc = 0x1fe6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941076));
    // 0x1fe6b0: 0xc040304  jal         func_100C10
    ctx->pc = 0x1FE6B0u;
    SET_GPR_U32(ctx, 31, 0x1FE6B8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1FE6B0u, 0x1FE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6B8u;
label_1fe6b8:
    // 0x1fe6b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fe6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe6bc: 0x27859994  addiu       $a1, $gp, -0x666C
    ctx->pc = 0x1fe6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941076));
    // 0x1fe6c0: 0xc040304  jal         func_100C10
    ctx->pc = 0x1FE6C0u;
    SET_GPR_U32(ctx, 31, 0x1FE6C8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1FE6C0u, 0x1FE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6C8u;
label_1fe6c8:
    // 0x1fe6c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe6cc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE6CCu;
    {
        const bool branch_taken_0x1fe6cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fe6cc) {
            ctx->pc = 0x1FE6DCu;
            goto label_1fe6dc;
        }
    }
    ctx->pc = 0x1FE6D4u;
    // 0x1fe6d4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1FE6D4u;
    {
        const bool branch_taken_0x1fe6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe6d4) {
            ctx->pc = 0x1FE894u;
            goto label_1fe894;
        }
    }
    ctx->pc = 0x1FE6DCu;
label_1fe6dc:
    // 0x1fe6dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fe6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe6e0: 0x27859988  addiu       $a1, $gp, -0x6678
    ctx->pc = 0x1fe6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941064));
    // 0x1fe6e4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1FE6E4u;
    SET_GPR_U32(ctx, 31, 0x1FE6ECu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1FE6E4u, 0x1FE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6ECu;
label_1fe6ec:
    // 0x1fe6ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fe6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe6f0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FE6F0u;
    SET_GPR_U32(ctx, 31, 0x1FE6F8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FE6F0u, 0x1FE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6F8u;
label_1fe6f8:
    // 0x1fe6f8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1fe6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe6fc: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1fe6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe700: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fe704: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fe704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fe708: 0x24a58cb8  addiu       $a1, $a1, -0x7348
    ctx->pc = 0x1fe708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937784));
    // 0x1fe70c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe710: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1FE710u;
    SET_GPR_U32(ctx, 31, 0x1FE718u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1FE710u, 0x1FE718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE718u;
label_1fe718:
    // 0x1fe718: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe71c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fe71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe720: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fe720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe724: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FE724u;
    SET_GPR_U32(ctx, 31, 0x1FE72Cu);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FE724u, 0x1FE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE72Cu;
label_1fe72c:
    // 0x1fe72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fe72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe730: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe734: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1fe734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe738: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1fe738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe73c: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FE73Cu;
    SET_GPR_U32(ctx, 31, 0x1FE744u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FE73Cu, 0x1FE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE744u;
label_1fe744:
    // 0x1fe744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe748: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe74c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fe74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe750: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe754: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fe754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fe758: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe75c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe760: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe764: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe768: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe76c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe774: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1fe774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1fe778: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe77c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fe77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe784: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fe784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fe788: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fe788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe78c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe790: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fe790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe794: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe798: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe79c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe7a4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1fe7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x1fe7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe7ac: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe7b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe7b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe7b8: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fe7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fe7bc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fe7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe7c0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe7c4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fe7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe7c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe7cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe7d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe7d8: 0xa0450014  sb          $a1, 0x14($v0)
    ctx->pc = 0x1fe7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe7dc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe7e0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe7e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fe7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe7e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe7ec: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fe7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fe7f0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fe7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe7f4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe7f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe7fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe800: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe804: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe80c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1fe80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1fe810: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe814: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1fe814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe818: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe81c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fe81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fe820: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fe820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe824: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe828: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fe828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe82c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe830: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe83c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1fe83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1fe840: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe844: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FE844u;
    SET_GPR_U32(ctx, 31, 0x1FE84Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FE844u, 0x1FE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE84Cu;
label_1fe84c:
    // 0x1fe84c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fe84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe850: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fe850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fe854: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1FE854u;
    SET_GPR_U32(ctx, 31, 0x1FE85Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1FE854u, 0x1FE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE85Cu;
label_1fe85c:
    // 0x1fe85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe864: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fe864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe86c: 0xc08c800  jal         func_232000
    ctx->pc = 0x1FE86Cu;
    SET_GPR_U32(ctx, 31, 0x1FE874u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1FE86Cu, 0x1FE874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE874u;
label_1fe874:
    // 0x1fe874: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1fe874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe878: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FE878u;
    SET_GPR_U32(ctx, 31, 0x1FE880u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FE878u, 0x1FE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE880u;
label_1fe880:
    // 0x1fe880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe88c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FE88Cu;
    SET_GPR_U32(ctx, 31, 0x1FE894u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FE88Cu, 0x1FE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE894u;
label_1fe894:
    // 0x1fe894: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1fe894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe898: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fe898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fe89c: 0xc042844  jal         func_10A110
    ctx->pc = 0x1FE89Cu;
    SET_GPR_U32(ctx, 31, 0x1FE8A4u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x1FE89Cu, 0x1FE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8A4u;
label_1fe8a4:
    // 0x1fe8a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fe8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fe8a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fe8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe8ac: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FE8ACu;
    SET_GPR_U32(ctx, 31, 0x1FE8B4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FE8ACu, 0x1FE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8B4u;
label_1fe8b4:
    // 0x1fe8b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fe8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fe8b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fe8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe8bc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1FE8BCu;
    SET_GPR_U32(ctx, 31, 0x1FE8C4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1FE8BCu, 0x1FE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8C4u;
label_1fe8c4:
    // 0x1fe8c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe8cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe8ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe8d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe8d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1fe8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fe8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE8E4u;
    // 0x1fe8e4: 0x0  nop
    ctx->pc = 0x1fe8e4u;
    // NOP
    // 0x1fe8e8: 0x0  nop
    ctx->pc = 0x1fe8e8u;
    // NOP
    // 0x1fe8ec: 0x0  nop
    ctx->pc = 0x1fe8ecu;
    // NOP
    ctx->pc = 0x1fe8f0u;
}
