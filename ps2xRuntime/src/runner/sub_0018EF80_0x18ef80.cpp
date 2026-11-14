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

// Function: sub_0018EF80
// Address: 0x18ef80 - 0x18f090
void sub_0018EF80_0x18ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EF80_0x18ef80");
#endif

    switch (ctx->pc) {
        case 0x18efb0u: goto label_18efb0;
        case 0x18efd0u: goto label_18efd0;
        case 0x18efe4u: goto label_18efe4;
        case 0x18f06cu: goto label_18f06c;
        default: break;
    }

    ctx->pc = 0x18ef80u;

    // 0x18ef80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18ef84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ef88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ef8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ef90: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x18ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x18ef94: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x18ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18ef98: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x18ef98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x18ef9c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18efa0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18efa4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x18efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x18efa8: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18EFA8u;
    SET_GPR_U32(ctx, 31, 0x18EFB0u);
    ctx->pc = 0x18DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DFC0u, 0x18EFA8u, 0x18EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFB0u;
label_18efb0:
    // 0x18efb0: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x18efb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18efb4: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x18EFB4u;
    {
        const bool branch_taken_0x18efb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18efb4) {
            ctx->pc = 0x18F06Cu;
            goto label_18f06c;
        }
    }
    ctx->pc = 0x18EFBCu;
    // 0x18efbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x18efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18efc0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18efc4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x18efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x18efc8: 0xc0637e0  jal         func_18DF80
    ctx->pc = 0x18EFC8u;
    SET_GPR_U32(ctx, 31, 0x18EFD0u);
    ctx->pc = 0x18DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF80u, 0x18EFC8u, 0x18EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EFD0u;
label_18efd0:
    // 0x18efd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18efd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18efd4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x18efd8: 0x24c65a00  addiu       $a2, $a2, 0x5A00
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23040));
    // 0x18efdc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18efe0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18efe4:
    // 0x18efe4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18efe8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x18efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18efec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18eff0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18eff4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x18eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x18eff8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x18eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x18effc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18effcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x18f000: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18F000u;
    {
        const bool branch_taken_0x18f000 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18f000) {
            ctx->pc = 0x18EFE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18efe4;
        }
    }
    ctx->pc = 0x18F008u;
    // 0x18f008: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18f008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f00c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f010: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x18f010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f014: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f018: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18f01c: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18f020: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x18f020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18f028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18f02c: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18f030: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x18f030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f038: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18f038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18f03c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x18f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18f040: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x18f040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18f048: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18f048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18f04c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18f050: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x18f050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x18f054: 0xc4ec0030  lwc1        $f12, 0x30($a3)
    ctx->pc = 0x18f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f058: 0xc4cd0034  lwc1        $f13, 0x34($a2)
    ctx->pc = 0x18f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18f05c: 0xc46e0038  lwc1        $f14, 0x38($v1)
    ctx->pc = 0x18f05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18f060: 0xc44f003c  lwc1        $f15, 0x3C($v0)
    ctx->pc = 0x18f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18f064: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x18F064u;
    SET_GPR_U32(ctx, 31, 0x18F06Cu);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x18F064u, 0x18F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F06Cu;
label_18f06c:
    // 0x18f06c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f078: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x18f078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f07c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F084u;
    // 0x18f084: 0x0  nop
    ctx->pc = 0x18f084u;
    // NOP
    // 0x18f088: 0x0  nop
    ctx->pc = 0x18f088u;
    // NOP
    // 0x18f08c: 0x0  nop
    ctx->pc = 0x18f08cu;
    // NOP
    ctx->pc = 0x18f090u;
}
