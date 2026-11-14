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

// Function: sub_0025AE60
// Address: 0x25ae60 - 0x25b100
void sub_0025AE60_0x25ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AE60_0x25ae60");
#endif

    switch (ctx->pc) {
        case 0x25aea0u: goto label_25aea0;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aef4u: goto label_25aef4;
        case 0x25af04u: goto label_25af04;
        case 0x25af40u: goto label_25af40;
        case 0x25af54u: goto label_25af54;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af8cu: goto label_25af8c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afb0u: goto label_25afb0;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afecu: goto label_25afec;
        case 0x25b000u: goto label_25b000;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b048u: goto label_25b048;
        case 0x25b058u: goto label_25b058;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0b8u: goto label_25b0b8;
        case 0x25b0ccu: goto label_25b0cc;
        default: break;
    }

    ctx->pc = 0x25ae60u;

    // 0x25ae60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25ae64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25ae68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25ae6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25ae70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25ae74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ae78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ae7c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x25ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x25ae80: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x25ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x25ae84: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25ae88: 0xa0400113  sb          $zero, 0x113($v0)
    ctx->pc = 0x25ae88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 275), (uint8_t)GPR_U32(ctx, 0));
    // 0x25ae8c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25ae90: 0x2405041b  addiu       $a1, $zero, 0x41B
    ctx->pc = 0x25ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1051));
    // 0x25ae94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ae94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae98: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25AE98u;
    SET_GPR_U32(ctx, 31, 0x25AEA0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25AE98u, 0x25AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEA0u;
label_25aea0:
    // 0x25aea0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25aea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aea4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aea8: 0xac5400c8  sw          $s4, 0xC8($v0)
    ctx->pc = 0x25aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 20));
    // 0x25aeac: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25aeb0: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x25aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x25aeb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25aeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aeb8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25AEB8u;
    SET_GPR_U32(ctx, 31, 0x25AEC0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25AEB8u, 0x25AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEC0u;
label_25aec0:
    // 0x25aec0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aec4: 0xac620120  sw          $v0, 0x120($v1)
    ctx->pc = 0x25aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 2));
    // 0x25aec8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25aecc: 0xc05ce40  jal         func_173900
    ctx->pc = 0x25AECCu;
    SET_GPR_U32(ctx, 31, 0x25AED4u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x25AECCu, 0x25AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AED4u;
label_25aed4:
    // 0x25aed4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25aed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25aed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aedc: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x25AEDCu;
    SET_GPR_U32(ctx, 31, 0x25AEE4u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x25AEDCu, 0x25AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEE4u;
label_25aee4:
    // 0x25aee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25aee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25aee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aeec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25AEECu;
    {
        const bool branch_taken_0x25aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aeec) {
            ctx->pc = 0x25AF20u;
            goto label_25af20;
        }
    }
    ctx->pc = 0x25AEF4u;
label_25aef4:
    // 0x25aef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25aef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aef8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25aef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aefc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x25AEFCu;
    SET_GPR_U32(ctx, 31, 0x25AF04u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x25AEFCu, 0x25AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF04u;
label_25af04:
    // 0x25af04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25af08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25af08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25af10: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25af18: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x25af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x25af1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25af1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25af20:
    // 0x25af20: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x25af20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x25af24: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x25AF24u;
    {
        const bool branch_taken_0x25af24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25af24) {
            ctx->pc = 0x25AEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aef4;
        }
    }
    ctx->pc = 0x25AF2Cu;
    // 0x25af2c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25af30: 0x2405041c  addiu       $a1, $zero, 0x41C
    ctx->pc = 0x25af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1052));
    // 0x25af34: 0x27869ef0  addiu       $a2, $gp, -0x6110
    ctx->pc = 0x25af34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942448));
    // 0x25af38: 0xc041a50  jal         func_106940
    ctx->pc = 0x25AF38u;
    SET_GPR_U32(ctx, 31, 0x25AF40u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x25AF38u, 0x25AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF40u;
label_25af40:
    // 0x25af40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25af40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af48: 0x27859ef0  addiu       $a1, $gp, -0x6110
    ctx->pc = 0x25af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942448));
    // 0x25af4c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x25AF4Cu;
    SET_GPR_U32(ctx, 31, 0x25AF54u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x25AF4Cu, 0x25AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF54u;
label_25af54:
    // 0x25af54: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x25af54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25af58: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x25af58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x25af5c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x25af5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x25af60: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x25af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x25af64: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25AF64u;
    {
        const bool branch_taken_0x25af64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25af64) {
            ctx->pc = 0x25AFC8u;
            goto label_25afc8;
        }
    }
    ctx->pc = 0x25AF6Cu;
    // 0x25af6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25af70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25af70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af74: 0xc040304  jal         func_100C10
    ctx->pc = 0x25AF74u;
    SET_GPR_U32(ctx, 31, 0x25AF7Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x25AF74u, 0x25AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF7Cu;
label_25af7c:
    // 0x25af7c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25af80: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25af80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25af84: 0xc119568  jal         func_4655A0
    ctx->pc = 0x25AF84u;
    SET_GPR_U32(ctx, 31, 0x25AF8Cu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x25AF84u, 0x25AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AF8Cu;
label_25af8c:
    // 0x25af8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af90: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x25af94: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25af98: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x25AF98u;
    SET_GPR_U32(ctx, 31, 0x25AFA0u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x25AF98u, 0x25AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFA0u;
label_25afa0:
    // 0x25afa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25afa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25afa8: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x25AFA8u;
    SET_GPR_U32(ctx, 31, 0x25AFB0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x25AFA8u, 0x25AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFB0u;
label_25afb0:
    // 0x25afb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25afb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25afb8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x25AFB8u;
    SET_GPR_U32(ctx, 31, 0x25AFC0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x25AFB8u, 0x25AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFC0u;
label_25afc0:
    // 0x25afc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25AFC0u;
    {
        const bool branch_taken_0x25afc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25afc0) {
            ctx->pc = 0x25AFECu;
            goto label_25afec;
        }
    }
    ctx->pc = 0x25AFC8u;
label_25afc8:
    // 0x25afc8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x25afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x25afcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25afccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afd0: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x25AFD0u;
    SET_GPR_U32(ctx, 31, 0x25AFD8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x25AFD0u, 0x25AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFD8u;
label_25afd8:
    // 0x25afd8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afdc: 0x246400cc  addiu       $a0, $v1, 0xCC
    ctx->pc = 0x25afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 204));
    // 0x25afe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25afe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afe4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x25AFE4u;
    SET_GPR_U32(ctx, 31, 0x25AFECu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x25AFE4u, 0x25AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFECu;
label_25afec:
    // 0x25afec: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25afecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25aff0: 0x2405041d  addiu       $a1, $zero, 0x41D
    ctx->pc = 0x25aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1053));
    // 0x25aff4: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x25aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x25aff8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25AFF8u;
    SET_GPR_U32(ctx, 31, 0x25B000u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25AFF8u, 0x25B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B000u;
label_25b000:
    // 0x25b000: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b004: 0xac6200d8  sw          $v0, 0xD8($v1)
    ctx->pc = 0x25b004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 2));
    // 0x25b008: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25b008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25b00c: 0x2405041e  addiu       $a1, $zero, 0x41E
    ctx->pc = 0x25b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1054));
    // 0x25b010: 0x27869eec  addiu       $a2, $gp, -0x6114
    ctx->pc = 0x25b010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942444));
    // 0x25b014: 0xc041a50  jal         func_106940
    ctx->pc = 0x25B014u;
    SET_GPR_U32(ctx, 31, 0x25B01Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x25B014u, 0x25B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B01Cu;
label_25b01c:
    // 0x25b01c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b020: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x25b020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b024: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x25b024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x25b028: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x25b028u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x25b02c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x25b030: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25B030u;
    {
        const bool branch_taken_0x25b030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b030) {
            ctx->pc = 0x25B094u;
            goto label_25b094;
        }
    }
    ctx->pc = 0x25B038u;
    // 0x25b038: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b03c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b040: 0xc040304  jal         func_100C10
    ctx->pc = 0x25B040u;
    SET_GPR_U32(ctx, 31, 0x25B048u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x25B040u, 0x25B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B048u;
label_25b048:
    // 0x25b048: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25b048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b04c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x25b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b050: 0xc119568  jal         func_4655A0
    ctx->pc = 0x25B050u;
    SET_GPR_U32(ctx, 31, 0x25B058u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x25B050u, 0x25B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B058u;
label_25b058:
    // 0x25b058: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b05c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x25b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x25b060: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x25b060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b064: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x25B064u;
    SET_GPR_U32(ctx, 31, 0x25B06Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x25B064u, 0x25B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B06Cu;
label_25b06c:
    // 0x25b06c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b070: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b074: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x25B074u;
    SET_GPR_U32(ctx, 31, 0x25B07Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x25B074u, 0x25B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B07Cu;
label_25b07c:
    // 0x25b07c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b080: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b084: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x25B084u;
    SET_GPR_U32(ctx, 31, 0x25B08Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x25B084u, 0x25B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B08Cu;
label_25b08c:
    // 0x25b08c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25B08Cu;
    {
        const bool branch_taken_0x25b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b08c) {
            ctx->pc = 0x25B0B8u;
            goto label_25b0b8;
        }
    }
    ctx->pc = 0x25B094u;
label_25b094:
    // 0x25b094: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x25b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x25b098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b09c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x25B09Cu;
    SET_GPR_U32(ctx, 31, 0x25B0A4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x25B09Cu, 0x25B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0A4u;
label_25b0a4:
    // 0x25b0a4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b0a8: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x25b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
    // 0x25b0ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25b0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0b0: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x25B0B0u;
    SET_GPR_U32(ctx, 31, 0x25B0B8u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x25B0B0u, 0x25B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0B8u;
label_25b0b8:
    // 0x25b0b8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x25b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25b0bc: 0x24050571  addiu       $a1, $zero, 0x571
    ctx->pc = 0x25b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1393));
    // 0x25b0c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0c4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x25B0C4u;
    SET_GPR_U32(ctx, 31, 0x25B0CCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x25B0C4u, 0x25B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0CCu;
label_25b0cc:
    // 0x25b0cc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b0d0: 0xac620124  sw          $v0, 0x124($v1)
    ctx->pc = 0x25b0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 2));
    // 0x25b0d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25b0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b0d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25b0d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b0dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25b0dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b0e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b0e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b0ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x25b0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25b0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25B0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B0F8u;
    // 0x25b0f8: 0x0  nop
    ctx->pc = 0x25b0f8u;
    // NOP
    // 0x25b0fc: 0x0  nop
    ctx->pc = 0x25b0fcu;
    // NOP
    ctx->pc = 0x25b100u;
}
