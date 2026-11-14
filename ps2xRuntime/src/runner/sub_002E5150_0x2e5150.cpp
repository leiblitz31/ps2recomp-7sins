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

// Function: sub_002E5150
// Address: 0x2e5150 - 0x2e52b0
void sub_002E5150_0x2e5150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5150_0x2e5150");
#endif

    switch (ctx->pc) {
        case 0x2e5180u: goto label_2e5180;
        case 0x2e5190u: goto label_2e5190;
        case 0x2e51a4u: goto label_2e51a4;
        case 0x2e51ccu: goto label_2e51cc;
        case 0x2e51f0u: goto label_2e51f0;
        case 0x2e5224u: goto label_2e5224;
        case 0x2e523cu: goto label_2e523c;
        case 0x2e5254u: goto label_2e5254;
        case 0x2e5264u: goto label_2e5264;
        default: break;
    }

    ctx->pc = 0x2e5150u;

    // 0x2e5150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e5150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e5154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e515c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5164: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e5168: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e516c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2e516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2e5170: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5174: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e5174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5178: 0xc0b91dc  jal         func_2E4770
    ctx->pc = 0x2E5178u;
    SET_GPR_U32(ctx, 31, 0x2E5180u);
    ctx->pc = 0x2E4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4770u, 0x2E5178u, 0x2E5180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5180u;
label_2e5180:
    // 0x2e5180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5184: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e5184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5188: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2E5188u;
    {
        const bool branch_taken_0x2e5188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5188) {
            ctx->pc = 0x2E5274u;
            goto label_2e5274;
        }
    }
    ctx->pc = 0x2E5190u;
label_2e5190:
    // 0x2e5190: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5194: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e5194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e519c: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E519Cu;
    SET_GPR_U32(ctx, 31, 0x2E51A4u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E519Cu, 0x2E51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51A4u;
label_2e51a4:
    // 0x2e51a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e51a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e51ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e51acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e51b0: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E51B0u;
    {
        const bool branch_taken_0x2e51b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e51b0) {
            ctx->pc = 0x2E5270u;
            goto label_2e5270;
        }
    }
    ctx->pc = 0x2E51B8u;
    // 0x2e51b8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e51bc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e51c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e51c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51c4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E51C4u;
    SET_GPR_U32(ctx, 31, 0x2E51CCu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E51C4u, 0x2E51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51CCu;
label_2e51cc:
    // 0x2e51cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e51d0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2e51d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e51d4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E51D4u;
    {
        const bool branch_taken_0x2e51d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e51d4) {
            ctx->pc = 0x2E5264u;
            goto label_2e5264;
        }
    }
    ctx->pc = 0x2E51DCu;
    // 0x2e51dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e51e0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e51e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e51e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51e8: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E51E8u;
    SET_GPR_U32(ctx, 31, 0x2E51F0u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E51E8u, 0x2E51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51F0u;
label_2e51f0:
    // 0x2e51f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e51f4: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x2e51f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e51f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e51fc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5200: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5208: 0x0  nop
    ctx->pc = 0x2e5208u;
    // NOP
    // 0x2e520c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2e520cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5210: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5214: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e5214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e5218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e521c: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E521Cu;
    SET_GPR_U32(ctx, 31, 0x2E5224u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E521Cu, 0x2E5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5224u;
label_2e5224:
    // 0x2e5224: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e5224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5228: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x2e5228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e522c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5230: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e5234: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E5234u;
    SET_GPR_U32(ctx, 31, 0x2E523Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E5234u, 0x2E523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E523Cu;
label_2e523c:
    // 0x2e523c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e523cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5240: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5244: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e5244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e5248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e5248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e524c: 0xc09d660  jal         func_275980
    ctx->pc = 0x2E524Cu;
    SET_GPR_U32(ctx, 31, 0x2E5254u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2E524Cu, 0x2E5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5254u;
label_2e5254:
    // 0x2e5254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5258: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e5258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e525c: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2E525Cu;
    SET_GPR_U32(ctx, 31, 0x2E5264u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2E525Cu, 0x2E5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5264u;
label_2e5264:
    // 0x2e5264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5268u;
    {
        const bool branch_taken_0x2e5268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5268) {
            ctx->pc = 0x2E5284u;
            goto label_2e5284;
        }
    }
    ctx->pc = 0x2E5270u;
label_2e5270:
    // 0x2e5270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e5270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e5274:
    // 0x2e5274: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2e5274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e5278: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2E5278u;
    {
        const bool branch_taken_0x2e5278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5278) {
            ctx->pc = 0x2E5190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5190;
        }
    }
    ctx->pc = 0x2E5280u;
    // 0x2e5280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5284:
    // 0x2e5284: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5288: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e5288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e528c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5290: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5294: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5298: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2e5298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e529c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E529Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E52A4u;
    // 0x2e52a4: 0x0  nop
    ctx->pc = 0x2e52a4u;
    // NOP
    // 0x2e52a8: 0x0  nop
    ctx->pc = 0x2e52a8u;
    // NOP
    // 0x2e52ac: 0x0  nop
    ctx->pc = 0x2e52acu;
    // NOP
    ctx->pc = 0x2e52b0u;
}
