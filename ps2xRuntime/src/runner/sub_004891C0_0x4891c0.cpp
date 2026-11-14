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

// Function: sub_004891C0
// Address: 0x4891c0 - 0x489550
void sub_004891C0_0x4891c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004891C0_0x4891c0");
#endif

    switch (ctx->pc) {
        case 0x489230u: goto label_489230;
        case 0x489280u: goto label_489280;
        case 0x48928cu: goto label_48928c;
        case 0x4892b8u: goto label_4892b8;
        case 0x4892f0u: goto label_4892f0;
        case 0x489330u: goto label_489330;
        case 0x4893e0u: goto label_4893e0;
        case 0x489430u: goto label_489430;
        case 0x489444u: goto label_489444;
        case 0x489490u: goto label_489490;
        case 0x4894c0u: goto label_4894c0;
        case 0x489500u: goto label_489500;
        case 0x489520u: goto label_489520;
        case 0x489540u: goto label_489540;
        default: break;
    }

    ctx->pc = 0x4891c0u;

    // 0x4891c0: 0x8f82c0f0  lw          $v0, -0x3F10($gp)
    ctx->pc = 0x4891c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951152)));
    // 0x4891c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4891C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4891C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4891CCu;
    // 0x4891cc: 0x0  nop
    ctx->pc = 0x4891ccu;
    // NOP
    // 0x4891d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4891d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4891d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4891d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4891d8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x4891d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x4891dc: 0x24636ae0  addiu       $v1, $v1, 0x6AE0
    ctx->pc = 0x4891dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27360));
    // 0x4891e0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4891e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4891e4: 0xac437d50  sw          $v1, 0x7D50($v0)
    ctx->pc = 0x4891e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657D50u, _value); } while (0);
    // 0x4891e8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x4891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x4891ec: 0x24636b80  addiu       $v1, $v1, 0x6B80
    ctx->pc = 0x4891ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27520));
    // 0x4891f0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4891f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4891f4: 0xac437d54  sw          $v1, 0x7D54($v0)
    ctx->pc = 0x4891f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657D54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657D54u, _value); } while (0);
    // 0x4891f8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x4891f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x4891fc: 0x24636b50  addiu       $v1, $v1, 0x6B50
    ctx->pc = 0x4891fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27472));
    // 0x489200: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x489204: 0xac437d58  sw          $v1, 0x7D58($v0)
    ctx->pc = 0x489204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657D58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657D58u, _value); } while (0);
    // 0x489208: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x489208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x48920c: 0x24636b10  addiu       $v1, $v1, 0x6B10
    ctx->pc = 0x48920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27408));
    // 0x489210: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x489214: 0xac437d5c  sw          $v1, 0x7D5C($v0)
    ctx->pc = 0x489214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657D5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657D5Cu, _value); } while (0);
    // 0x489218: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x489218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x48921c: 0x24847d50  addiu       $a0, $a0, 0x7D50
    ctx->pc = 0x48921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32080));
    // 0x489220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x489220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489224: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x489224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x489228: 0xc1063a8  jal         func_418EA0
    ctx->pc = 0x489228u;
    SET_GPR_U32(ctx, 31, 0x489230u);
    ctx->pc = 0x418EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418EA0u, 0x489228u, 0x489230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489230u;
label_489230:
    // 0x489230: 0xaf82c0c4  sw          $v0, -0x3F3C($gp)
    ctx->pc = 0x489230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951108), GPR_U32(ctx, 2));
    // 0x489234: 0x8f82c0c4  lw          $v0, -0x3F3C($gp)
    ctx->pc = 0x489234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951108)));
    // 0x489238: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x489238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48923c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48923cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x489240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x489244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489248: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48924c: 0x3e00008  jr          $ra
    ctx->pc = 0x48924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48924Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489254u;
    // 0x489254: 0x0  nop
    ctx->pc = 0x489254u;
    // NOP
    // 0x489258: 0x0  nop
    ctx->pc = 0x489258u;
    // NOP
    // 0x48925c: 0x0  nop
    ctx->pc = 0x48925cu;
    // NOP
    // 0x489260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x489264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x489264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x489268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48926c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48926cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x489270: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x489270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x489274: 0x2784c0c0  addiu       $a0, $gp, -0x3F40
    ctx->pc = 0x489274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951104));
    // 0x489278: 0xc122678  jal         func_4899E0
    ctx->pc = 0x489278u;
    SET_GPR_U32(ctx, 31, 0x489280u);
    ctx->pc = 0x4899E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4899E0u, 0x489278u, 0x489280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489280u;
label_489280:
    // 0x489280: 0x2784c0c0  addiu       $a0, $gp, -0x3F40
    ctx->pc = 0x489280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951104));
    // 0x489284: 0xc106354  jal         func_418D50
    ctx->pc = 0x489284u;
    SET_GPR_U32(ctx, 31, 0x48928Cu);
    ctx->pc = 0x418D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418D50u, 0x489284u, 0x48928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48928Cu;
label_48928c:
    // 0x48928c: 0xaf82c0c8  sw          $v0, -0x3F38($gp)
    ctx->pc = 0x48928cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951112), GPR_U32(ctx, 2));
    // 0x489290: 0x8f82c0c8  lw          $v0, -0x3F38($gp)
    ctx->pc = 0x489290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951112)));
    // 0x489294: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x489294u;
    {
        const bool branch_taken_0x489294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489294) {
            ctx->pc = 0x4892B8u;
            goto label_4892b8;
        }
    }
    ctx->pc = 0x48929Cu;
    // 0x48929c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x48929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4892a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4892a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4892a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4892A4u;
    {
        const bool branch_taken_0x4892a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4892a4) {
            ctx->pc = 0x4892B8u;
            goto label_4892b8;
        }
    }
    ctx->pc = 0x4892ACu;
    // 0x4892ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x4892acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4892b0: 0xc106450  jal         func_419140
    ctx->pc = 0x4892B0u;
    SET_GPR_U32(ctx, 31, 0x4892B8u);
    ctx->pc = 0x419140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419140u, 0x4892B0u, 0x4892B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4892B8u;
label_4892b8:
    // 0x4892b8: 0x8f82c0c8  lw          $v0, -0x3F38($gp)
    ctx->pc = 0x4892b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951112)));
    // 0x4892bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4892bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4892c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4892c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4892c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4892c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4892c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4892c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4892cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4892ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4892d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4892d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4892d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4892D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4892D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4892DCu;
    // 0x4892dc: 0x0  nop
    ctx->pc = 0x4892dcu;
    // NOP
    // 0x4892e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4892e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4892e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4892e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4892e8: 0xc106332  jal         func_418CC8
    ctx->pc = 0x4892E8u;
    SET_GPR_U32(ctx, 31, 0x4892F0u);
    ctx->pc = 0x418CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418CC8u, 0x4892E8u, 0x4892F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4892F0u;
label_4892f0:
    // 0x4892f0: 0xaf82c0c8  sw          $v0, -0x3F38($gp)
    ctx->pc = 0x4892f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951112), GPR_U32(ctx, 2));
    // 0x4892f4: 0x8f82c0c8  lw          $v0, -0x3F38($gp)
    ctx->pc = 0x4892f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951112)));
    // 0x4892f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4892f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4892fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4892fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x489300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x489304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489308: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48930c: 0x3e00008  jr          $ra
    ctx->pc = 0x48930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489314u;
    // 0x489314: 0x0  nop
    ctx->pc = 0x489314u;
    // NOP
    // 0x489318: 0x0  nop
    ctx->pc = 0x489318u;
    // NOP
    // 0x48931c: 0x0  nop
    ctx->pc = 0x48931cu;
    // NOP
    // 0x489320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x489320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489328: 0xc1062ee  jal         func_418BB8
    ctx->pc = 0x489328u;
    SET_GPR_U32(ctx, 31, 0x489330u);
    ctx->pc = 0x418BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418BB8u, 0x489328u, 0x489330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489330u;
label_489330:
    // 0x489330: 0xaf82c0cc  sw          $v0, -0x3F34($gp)
    ctx->pc = 0x489330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951116), GPR_U32(ctx, 2));
    // 0x489334: 0x8f82c0cc  lw          $v0, -0x3F34($gp)
    ctx->pc = 0x489334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951116)));
    // 0x489338: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x489338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48933c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48933cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x489340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x489344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489348: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48934c: 0x3e00008  jr          $ra
    ctx->pc = 0x48934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489354u;
    // 0x489354: 0x0  nop
    ctx->pc = 0x489354u;
    // NOP
    // 0x489358: 0x0  nop
    ctx->pc = 0x489358u;
    // NOP
    // 0x48935c: 0x0  nop
    ctx->pc = 0x48935cu;
    // NOP
    // 0x489360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x489360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x489364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489368: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x489368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48936c: 0x3e00008  jr          $ra
    ctx->pc = 0x48936Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48936Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489374u;
    // 0x489374: 0x0  nop
    ctx->pc = 0x489374u;
    // NOP
    // 0x489378: 0x0  nop
    ctx->pc = 0x489378u;
    // NOP
    // 0x48937c: 0x0  nop
    ctx->pc = 0x48937cu;
    // NOP
    // 0x489380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x489380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x489384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x489384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x489388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x489388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48938c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x489390: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x489390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x489394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x489394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x489398: 0x0  nop
    ctx->pc = 0x489398u;
    // NOP
    // 0x48939c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48939cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4893a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4893a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4893a4: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x4893a4u;
    { uint32_t bits = FAST_READ32(0x61E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4893a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4893a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4893ac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x4893ACu;
    {
        const bool branch_taken_0x4893ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4893ac) {
            ctx->pc = 0x4893C0u;
            goto label_4893c0;
        }
    }
    ctx->pc = 0x4893B4u;
    // 0x4893b4: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x4893b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4893b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4893B8u;
    {
        const bool branch_taken_0x4893b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4893b8) {
            ctx->pc = 0x4893C4u;
            goto label_4893c4;
        }
    }
    ctx->pc = 0x4893C0u;
label_4893c0:
    // 0x4893c0: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x4893c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4893c4:
    // 0x4893c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4893c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4893c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4893c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4893cc: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4893CCu;
    {
        const bool branch_taken_0x4893cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4893cc) {
            ctx->pc = 0x4893F4u;
            goto label_4893f4;
        }
    }
    ctx->pc = 0x4893D4u;
    // 0x4893d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4893d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4893d8: 0xc10d442  jal         func_435108
    ctx->pc = 0x4893D8u;
    SET_GPR_U32(ctx, 31, 0x4893E0u);
    ctx->pc = 0x435108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435108u, 0x4893D8u, 0x4893E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4893E0u;
label_4893e0:
    // 0x4893e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4893e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4893e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4893e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4893e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4893e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4893ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4893ECu;
    {
        const bool branch_taken_0x4893ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4893ec) {
            ctx->pc = 0x4893F8u;
            goto label_4893f8;
        }
    }
    ctx->pc = 0x4893F4u;
label_4893f4:
    // 0x4893f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4893f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4893f8:
    // 0x4893f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4893f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4893fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4893fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489404: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x489404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x489408: 0x3e00008  jr          $ra
    ctx->pc = 0x489408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489410u;
    // 0x489410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x489410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x489414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x489414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x489418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48941c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x48941cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489420: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x489424: 0x8c447d64  lw          $a0, 0x7D64($v0)
    ctx->pc = 0x489424u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x657D64u));
    // 0x489428: 0xc106250  jal         func_418940
    ctx->pc = 0x489428u;
    SET_GPR_U32(ctx, 31, 0x489430u);
    ctx->pc = 0x418940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418940u, 0x489428u, 0x489430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489430u;
label_489430:
    // 0x489430: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x489430u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x489434: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x489438: 0x8c447d60  lw          $a0, 0x7D60($v0)
    ctx->pc = 0x489438u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x657D60u));
    // 0x48943c: 0xc106450  jal         func_419140
    ctx->pc = 0x48943Cu;
    SET_GPR_U32(ctx, 31, 0x489444u);
    ctx->pc = 0x419140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419140u, 0x48943Cu, 0x489444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489444u;
label_489444:
    // 0x489444: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x489444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x489448: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x489448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x48944c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48944cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x489450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x489454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x489454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48945c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48945cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x489460: 0x3e00008  jr          $ra
    ctx->pc = 0x489460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489468u;
    // 0x489468: 0x0  nop
    ctx->pc = 0x489468u;
    // NOP
    // 0x48946c: 0x0  nop
    ctx->pc = 0x48946cu;
    // NOP
    // 0x489470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x489470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489478: 0x2784b604  addiu       $a0, $gp, -0x49FC
    ctx->pc = 0x489478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948356));
    // 0x48947c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x48947cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x489480: 0x24a5e4a8  addiu       $a1, $a1, -0x1B58
    ctx->pc = 0x489480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960296));
    // 0x489484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x489484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489488: 0xc106d4c  jal         func_41B530
    ctx->pc = 0x489488u;
    SET_GPR_U32(ctx, 31, 0x489490u);
    ctx->pc = 0x41B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B530u, 0x489488u, 0x489490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489490u;
label_489490:
    // 0x489490: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x489490u;
    {
        const bool branch_taken_0x489490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489490) {
            ctx->pc = 0x4894A4u;
            goto label_4894a4;
        }
    }
    ctx->pc = 0x489498u;
    // 0x489498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x489498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48949c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48949Cu;
    {
        const bool branch_taken_0x48949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48949c) {
            ctx->pc = 0x4894D8u;
            goto label_4894d8;
        }
    }
    ctx->pc = 0x4894A4u;
label_4894a4:
    // 0x4894a4: 0x2784b608  addiu       $a0, $gp, -0x49F8
    ctx->pc = 0x4894a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948360));
    // 0x4894a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x4894a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x4894ac: 0x24a57db8  addiu       $a1, $a1, 0x7DB8
    ctx->pc = 0x4894acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32184));
    // 0x4894b0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x4894b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x4894b4: 0x24c677b8  addiu       $a2, $a2, 0x77B8
    ctx->pc = 0x4894b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30648));
    // 0x4894b8: 0xc106d4c  jal         func_41B530
    ctx->pc = 0x4894B8u;
    SET_GPR_U32(ctx, 31, 0x4894C0u);
    ctx->pc = 0x41B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B530u, 0x4894B8u, 0x4894C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4894C0u;
label_4894c0:
    // 0x4894c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4894C0u;
    {
        const bool branch_taken_0x4894c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4894c0) {
            ctx->pc = 0x4894D4u;
            goto label_4894d4;
        }
    }
    ctx->pc = 0x4894C8u;
    // 0x4894c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4894c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4894cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4894CCu;
    {
        const bool branch_taken_0x4894cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4894cc) {
            ctx->pc = 0x4894D8u;
            goto label_4894d8;
        }
    }
    ctx->pc = 0x4894D4u;
label_4894d4:
    // 0x4894d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4894d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4894d8:
    // 0x4894d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4894d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4894dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4894dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4894e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4894E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4894E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4894E8u;
    // 0x4894e8: 0x0  nop
    ctx->pc = 0x4894e8u;
    // NOP
    // 0x4894ec: 0x0  nop
    ctx->pc = 0x4894ecu;
    // NOP
    // 0x4894f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4894f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4894f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4894f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4894f8: 0xc124a90  jal         func_492A40
    ctx->pc = 0x4894F8u;
    SET_GPR_U32(ctx, 31, 0x489500u);
    ctx->pc = 0x492A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492A40u, 0x4894F8u, 0x489500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489500u;
label_489500:
    // 0x489500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489504: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x489508: 0x3e00008  jr          $ra
    ctx->pc = 0x489508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489510u;
    // 0x489510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x489510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489518: 0xc124768  jal         func_491DA0
    ctx->pc = 0x489518u;
    SET_GPR_U32(ctx, 31, 0x489520u);
    ctx->pc = 0x491DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491DA0u, 0x489518u, 0x489520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489520u;
label_489520:
    // 0x489520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489524: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x489528: 0x3e00008  jr          $ra
    ctx->pc = 0x489528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489530u;
    // 0x489530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x489530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489538: 0xc1247ac  jal         func_491EB0
    ctx->pc = 0x489538u;
    SET_GPR_U32(ctx, 31, 0x489540u);
    ctx->pc = 0x491EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491EB0u, 0x489538u, 0x489540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489540u;
label_489540:
    // 0x489540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489544: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x489548: 0x3e00008  jr          $ra
    ctx->pc = 0x489548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489550u;
}
