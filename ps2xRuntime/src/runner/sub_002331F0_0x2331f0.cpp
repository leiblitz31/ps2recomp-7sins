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

// Function: sub_002331F0
// Address: 0x2331f0 - 0x233350
void sub_002331F0_0x2331f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002331F0_0x2331f0");
#endif

    switch (ctx->pc) {
        case 0x233224u: goto label_233224;
        case 0x233238u: goto label_233238;
        case 0x23325cu: goto label_23325c;
        case 0x233284u: goto label_233284;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332d0u: goto label_2332d0;
        case 0x233300u: goto label_233300;
        case 0x233310u: goto label_233310;
        case 0x233334u: goto label_233334;
        default: break;
    }

    ctx->pc = 0x2331f0u;

    // 0x2331f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2331f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2331f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2331f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2331f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2331f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2331fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2331fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x233200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x233200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x233204: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x233204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x233208: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x233208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x23320c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x23320cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x233210: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x233210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x233214: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x233214u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x233218: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x233218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23321c: 0xc04def0  jal         func_137BC0
    ctx->pc = 0x23321Cu;
    SET_GPR_U32(ctx, 31, 0x233224u);
    ctx->pc = 0x137BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BC0u, 0x23321Cu, 0x233224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233224u;
label_233224:
    // 0x233224: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x233224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x233228: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x233228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x23322c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x233230: 0xc041954  jal         func_106550
    ctx->pc = 0x233230u;
    SET_GPR_U32(ctx, 31, 0x233238u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x233230u, 0x233238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233238u;
label_233238:
    // 0x233238: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x233238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x23323c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233240: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x233240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233244: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x233244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233248: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23324c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23324cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233254: 0xc04df10  jal         func_137C40
    ctx->pc = 0x233254u;
    SET_GPR_U32(ctx, 31, 0x23325Cu);
    ctx->pc = 0x137C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C40u, 0x233254u, 0x23325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23325Cu;
label_23325c:
    // 0x23325c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233260: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x233260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233264: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x233264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233268: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x233268u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x23326c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233270: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x233270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233274: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x233274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233278: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x233278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x23327c: 0xc04dea4  jal         func_137A90
    ctx->pc = 0x23327Cu;
    SET_GPR_U32(ctx, 31, 0x233284u);
    ctx->pc = 0x137A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A90u, 0x23327Cu, 0x233284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233284u;
label_233284:
    // 0x233284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233288: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23328c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233290: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233290u;
    {
        const bool branch_taken_0x233290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233290) {
            ctx->pc = 0x2332B4u;
            goto label_2332b4;
        }
    }
    ctx->pc = 0x233298u;
    // 0x233298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23329c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23329cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2332a0: 0xc04dec4  jal         func_137B10
    ctx->pc = 0x2332A0u;
    SET_GPR_U32(ctx, 31, 0x2332A8u);
    ctx->pc = 0x137B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137B10u, 0x2332A0u, 0x2332A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332A8u;
label_2332a8:
    // 0x2332a8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2332a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2332ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2332ACu;
    {
        const bool branch_taken_0x2332ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2332ac) {
            ctx->pc = 0x2332D4u;
            goto label_2332d4;
        }
    }
    ctx->pc = 0x2332B4u;
label_2332b4:
    // 0x2332b4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2332b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2332b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2332b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332bc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2332bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2332c0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2332c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2332c4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2332c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2332c8: 0xc08ccd4  jal         func_233350
    ctx->pc = 0x2332C8u;
    SET_GPR_U32(ctx, 31, 0x2332D0u);
    ctx->pc = 0x233350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233350u, 0x2332C8u, 0x2332D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332D0u;
label_2332d0:
    // 0x2332d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2332d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2332d4:
    // 0x2332d4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2332d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2332d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2332D8u;
    {
        const bool branch_taken_0x2332d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2332d8) {
            ctx->pc = 0x233304u;
            goto label_233304;
        }
    }
    ctx->pc = 0x2332E0u;
    // 0x2332e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2332e4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2332e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2332e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2332e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2332ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2332ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2332f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2332f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332f4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2332f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2332f8: 0xc04dea4  jal         func_137A90
    ctx->pc = 0x2332F8u;
    SET_GPR_U32(ctx, 31, 0x233300u);
    ctx->pc = 0x137A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A90u, 0x2332F8u, 0x233300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233300u;
label_233300:
    // 0x233300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233304:
    // 0x233304: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x233304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233308: 0xc04de6c  jal         func_1379B0
    ctx->pc = 0x233308u;
    SET_GPR_U32(ctx, 31, 0x233310u);
    ctx->pc = 0x1379B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1379B0u, 0x233308u, 0x233310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233310u;
label_233310:
    // 0x233310: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x233310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x233314: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x233314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x233318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23331c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x23331cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x233320: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x233320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233328: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23332c: 0xc04de58  jal         func_137960
    ctx->pc = 0x23332Cu;
    SET_GPR_U32(ctx, 31, 0x233334u);
    ctx->pc = 0x137960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137960u, 0x23332Cu, 0x233334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233334u;
label_233334:
    // 0x233334: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23333c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23333cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233344: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x233348: 0x3e00008  jr          $ra
    ctx->pc = 0x233348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233350u;
}
