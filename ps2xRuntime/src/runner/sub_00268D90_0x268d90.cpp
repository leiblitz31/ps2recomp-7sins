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

// Function: sub_00268D90
// Address: 0x268d90 - 0x2690b0
void sub_00268D90_0x268d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268D90_0x268d90");
#endif

    switch (ctx->pc) {
        case 0x268dc4u: goto label_268dc4;
        case 0x268df0u: goto label_268df0;
        case 0x268e00u: goto label_268e00;
        case 0x268e14u: goto label_268e14;
        case 0x268e20u: goto label_268e20;
        case 0x268e30u: goto label_268e30;
        case 0x268e4cu: goto label_268e4c;
        case 0x268e6cu: goto label_268e6c;
        case 0x268e98u: goto label_268e98;
        case 0x268eacu: goto label_268eac;
        case 0x268ebcu: goto label_268ebc;
        case 0x268ed0u: goto label_268ed0;
        case 0x268edcu: goto label_268edc;
        case 0x268eecu: goto label_268eec;
        case 0x268f04u: goto label_268f04;
        case 0x268f1cu: goto label_268f1c;
        case 0x268f30u: goto label_268f30;
        case 0x268f48u: goto label_268f48;
        case 0x268f68u: goto label_268f68;
        case 0x268f80u: goto label_268f80;
        case 0x268f8cu: goto label_268f8c;
        case 0x268f9cu: goto label_268f9c;
        case 0x268facu: goto label_268fac;
        case 0x268fc0u: goto label_268fc0;
        case 0x268fd0u: goto label_268fd0;
        case 0x268fe0u: goto label_268fe0;
        case 0x268fecu: goto label_268fec;
        case 0x269000u: goto label_269000;
        case 0x269010u: goto label_269010;
        case 0x269028u: goto label_269028;
        case 0x269040u: goto label_269040;
        case 0x269050u: goto label_269050;
        case 0x26905cu: goto label_26905c;
        case 0x26906cu: goto label_26906c;
        case 0x26907cu: goto label_26907c;
        default: break;
    }

    ctx->pc = 0x268d90u;

    // 0x268d90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x268d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x268d94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x268d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x268d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x268d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x268d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x268d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x268da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x268da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x268da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268dac: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x268dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x268db0: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x268db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x268db4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x268db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268db8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x268db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x268dbc: 0xc09a714  jal         func_269C50
    ctx->pc = 0x268DBCu;
    SET_GPR_U32(ctx, 31, 0x268DC4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x268DBCu, 0x268DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DC4u;
label_268dc4:
    // 0x268dc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268dc8: 0x162000ac  bnez        $s1, . + 4 + (0xAC << 2)
    ctx->pc = 0x268DC8u;
    {
        const bool branch_taken_0x268dc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x268dc8) {
            ctx->pc = 0x26907Cu;
            goto label_26907c;
        }
    }
    ctx->pc = 0x268DD0u;
    // 0x268dd0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268dd4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x268dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x268dd8: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x268DD8u;
    {
        const bool branch_taken_0x268dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268dd8) {
            ctx->pc = 0x268F5Cu;
            goto label_268f5c;
        }
    }
    ctx->pc = 0x268DE0u;
    // 0x268de0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268de4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x268de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x268de8: 0xc043104  jal         func_10C410
    ctx->pc = 0x268DE8u;
    SET_GPR_U32(ctx, 31, 0x268DF0u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x268DE8u, 0x268DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DF0u;
label_268df0:
    // 0x268df0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x268df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x268df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268df8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x268DF8u;
    {
        const bool branch_taken_0x268df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268df8) {
            ctx->pc = 0x268E7Cu;
            goto label_268e7c;
        }
    }
    ctx->pc = 0x268E00u;
label_268e00:
    // 0x268e00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268e04: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x268e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x268e08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e0c: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x268E0Cu;
    SET_GPR_U32(ctx, 31, 0x268E14u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x268E0Cu, 0x268E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E14u;
label_268e14:
    // 0x268e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e18: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x268E18u;
    SET_GPR_U32(ctx, 31, 0x268E20u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x268E18u, 0x268E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E20u;
label_268e20:
    // 0x268e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x268e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e24: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x268e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x268e28: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x268E28u;
    SET_GPR_U32(ctx, 31, 0x268E30u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x268E28u, 0x268E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E30u;
label_268e30:
    // 0x268e30: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268E30u;
    {
        const bool branch_taken_0x268e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268e30) {
            ctx->pc = 0x268E78u;
            goto label_268e78;
        }
    }
    ctx->pc = 0x268E38u;
    // 0x268e38: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268e3c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x268e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x268e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e44: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x268E44u;
    SET_GPR_U32(ctx, 31, 0x268E4Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x268E44u, 0x268E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E4Cu;
label_268e4c:
    // 0x268e4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268e50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x268e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x268e54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x268e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x268e58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268e5c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x268e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x268e60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e64: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x268E64u;
    SET_GPR_U32(ctx, 31, 0x268E6Cu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x268E64u, 0x268E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E6Cu;
label_268e6c:
    // 0x268e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268e70: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x268E70u;
    {
        const bool branch_taken_0x268e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e70) {
            ctx->pc = 0x269080u;
            goto label_269080;
        }
    }
    ctx->pc = 0x268E78u;
label_268e78:
    // 0x268e78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x268e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_268e7c:
    // 0x268e7c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x268e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x268e80: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x268E80u;
    {
        const bool branch_taken_0x268e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268e80) {
            ctx->pc = 0x268E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268e00;
        }
    }
    ctx->pc = 0x268E88u;
    // 0x268e88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x268e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268e8c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x268e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x268e90: 0xc040304  jal         func_100C10
    ctx->pc = 0x268E90u;
    SET_GPR_U32(ctx, 31, 0x268E98u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x268E90u, 0x268E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E98u;
label_268e98:
    // 0x268e98: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268e9c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x268e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x268ea0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x268ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268ea4: 0xc08e79c  jal         func_239E70
    ctx->pc = 0x268EA4u;
    SET_GPR_U32(ctx, 31, 0x268EACu);
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x268EA4u, 0x268EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EACu;
label_268eac:
    // 0x268eac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x268eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268eb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268eb4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x268EB4u;
    SET_GPR_U32(ctx, 31, 0x268EBCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x268EB4u, 0x268EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EBCu;
label_268ebc:
    // 0x268ebc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268ec0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x268ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x268ec4: 0x2785a0c8  addiu       $a1, $gp, -0x5F38
    ctx->pc = 0x268ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942920));
    // 0x268ec8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x268EC8u;
    SET_GPR_U32(ctx, 31, 0x268ED0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x268EC8u, 0x268ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268ED0u;
label_268ed0:
    // 0x268ed0: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x268ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x268ed4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x268ED4u;
    SET_GPR_U32(ctx, 31, 0x268EDCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x268ED4u, 0x268EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EDCu;
label_268edc:
    // 0x268edc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x268edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x268ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ee4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x268EE4u;
    SET_GPR_U32(ctx, 31, 0x268EECu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x268EE4u, 0x268EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EECu;
label_268eec:
    // 0x268eec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x268eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ef0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x268EF0u;
    {
        const bool branch_taken_0x268ef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ef0) {
            ctx->pc = 0x268F08u;
            goto label_268f08;
        }
    }
    ctx->pc = 0x268EF8u;
    // 0x268ef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268efc: 0xc0995d0  jal         func_265740
    ctx->pc = 0x268EFCu;
    SET_GPR_U32(ctx, 31, 0x268F04u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x268EFCu, 0x268F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F04u;
label_268f04:
    // 0x268f04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x268f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268f08:
    // 0x268f08: 0xafb300bc  sw          $s3, 0xBC($sp)
    ctx->pc = 0x268f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
    // 0x268f0c: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x268f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x268f10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x268f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x268f14: 0xc099a18  jal         func_266860
    ctx->pc = 0x268F14u;
    SET_GPR_U32(ctx, 31, 0x268F1Cu);
    ctx->pc = 0x266860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266860u, 0x268F14u, 0x268F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F1Cu;
label_268f1c:
    // 0x268f1c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x268f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x268f20: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x268f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x268f24: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x268f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x268f28: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x268F28u;
    SET_GPR_U32(ctx, 31, 0x268F30u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x268F28u, 0x268F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F30u;
label_268f30:
    // 0x268f30: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x268f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x268f34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x268f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x268f38: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x268f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x268f3c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x268f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x268f40: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x268F40u;
    SET_GPR_U32(ctx, 31, 0x268F48u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x268F40u, 0x268F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F48u;
label_268f48:
    // 0x268f48: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x268f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x268f4c: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x268f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x268f50: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x268f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x268f54: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x268F54u;
    {
        const bool branch_taken_0x268f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f54) {
            ctx->pc = 0x269080u;
            goto label_269080;
        }
    }
    ctx->pc = 0x268F5Cu;
label_268f5c:
    // 0x268f5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x268f60: 0xc041b48  jal         func_106D20
    ctx->pc = 0x268F60u;
    SET_GPR_U32(ctx, 31, 0x268F68u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x268F60u, 0x268F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F68u;
label_268f68:
    // 0x268f68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x268f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x268f6c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x268f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x268f70: 0x24a5cd90  addiu       $a1, $a1, -0x3270
    ctx->pc = 0x268f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954384));
    // 0x268f74: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x268f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x268f78: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x268F78u;
    SET_GPR_U32(ctx, 31, 0x268F80u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x268F78u, 0x268F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F80u;
label_268f80:
    // 0x268f80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x268f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x268f84: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x268F84u;
    SET_GPR_U32(ctx, 31, 0x268F8Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x268F84u, 0x268F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F8Cu;
label_268f8c:
    // 0x268f8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x268f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x268f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x268f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f94: 0xc040304  jal         func_100C10
    ctx->pc = 0x268F94u;
    SET_GPR_U32(ctx, 31, 0x268F9Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x268F94u, 0x268F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F9Cu;
label_268f9c:
    // 0x268f9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x268f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x268fa0: 0x2785a0cc  addiu       $a1, $gp, -0x5F34
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942924));
    // 0x268fa4: 0xc040304  jal         func_100C10
    ctx->pc = 0x268FA4u;
    SET_GPR_U32(ctx, 31, 0x268FACu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x268FA4u, 0x268FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FACu;
label_268fac:
    // 0x268fac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x268facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268fb0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x268fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x268fb4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x268fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x268fb8: 0xc119d74  jal         func_4675D0
    ctx->pc = 0x268FB8u;
    SET_GPR_U32(ctx, 31, 0x268FC0u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x268FB8u, 0x268FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FC0u;
label_268fc0:
    // 0x268fc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x268fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x268fc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268fc8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x268FC8u;
    SET_GPR_U32(ctx, 31, 0x268FD0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x268FC8u, 0x268FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FD0u;
label_268fd0:
    // 0x268fd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x268fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x268fd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x268fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268fd8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x268FD8u;
    SET_GPR_U32(ctx, 31, 0x268FE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x268FD8u, 0x268FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FE0u;
label_268fe0:
    // 0x268fe0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x268fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268fe4: 0xc119db4  jal         func_4676D0
    ctx->pc = 0x268FE4u;
    SET_GPR_U32(ctx, 31, 0x268FECu);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x268FE4u, 0x268FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FECu;
label_268fec:
    // 0x268fec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x268FECu;
    {
        const bool branch_taken_0x268fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268fec) {
            ctx->pc = 0x26905Cu;
            goto label_26905c;
        }
    }
    ctx->pc = 0x268FF4u;
    // 0x268ff4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x268ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x268ff8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x268FF8u;
    SET_GPR_U32(ctx, 31, 0x269000u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x268FF8u, 0x269000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269000u;
label_269000:
    // 0x269000: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x269000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x269004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269008: 0xc0400e0  jal         func_100380
    ctx->pc = 0x269008u;
    SET_GPR_U32(ctx, 31, 0x269010u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x269008u, 0x269010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269010u;
label_269010:
    // 0x269010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x269010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269014: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x269014u;
    {
        const bool branch_taken_0x269014 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x269014) {
            ctx->pc = 0x26902Cu;
            goto label_26902c;
        }
    }
    ctx->pc = 0x26901Cu;
    // 0x26901c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269020: 0xc0995d0  jal         func_265740
    ctx->pc = 0x269020u;
    SET_GPR_U32(ctx, 31, 0x269028u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x269020u, 0x269028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269028u;
label_269028:
    // 0x269028: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x269028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26902c:
    // 0x26902c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x26902cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269034: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x269034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269038: 0xc099a28  jal         func_2668A0
    ctx->pc = 0x269038u;
    SET_GPR_U32(ctx, 31, 0x269040u);
    ctx->pc = 0x2668A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2668A0u, 0x269038u, 0x269040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269040u;
label_269040:
    // 0x269040: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x269040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x269044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x269044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269048: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x269048u;
    SET_GPR_U32(ctx, 31, 0x269050u);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x269048u, 0x269050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269050u;
label_269050:
    // 0x269050: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x269050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269054: 0xc119e7c  jal         func_4679F0
    ctx->pc = 0x269054u;
    SET_GPR_U32(ctx, 31, 0x26905Cu);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x269054u, 0x26905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26905Cu;
label_26905c:
    // 0x26905c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26905cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x269060: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269064: 0xc119d90  jal         func_467640
    ctx->pc = 0x269064u;
    SET_GPR_U32(ctx, 31, 0x26906Cu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x269064u, 0x26906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26906Cu;
label_26906c:
    // 0x26906c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x26906cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x269070: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269074: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x269074u;
    SET_GPR_U32(ctx, 31, 0x26907Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x269074u, 0x26907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26907Cu;
label_26907c:
    // 0x26907c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26907cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269080:
    // 0x269080: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x269080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269084: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x269084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269088: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x269088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26908c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26908cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269098: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x269098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26909c: 0x3e00008  jr          $ra
    ctx->pc = 0x26909Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26909Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2690A4u;
    // 0x2690a4: 0x0  nop
    ctx->pc = 0x2690a4u;
    // NOP
    // 0x2690a8: 0x0  nop
    ctx->pc = 0x2690a8u;
    // NOP
    // 0x2690ac: 0x0  nop
    ctx->pc = 0x2690acu;
    // NOP
    ctx->pc = 0x2690b0u;
}
