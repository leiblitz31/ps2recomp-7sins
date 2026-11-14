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

// Function: sub_00277EA0
// Address: 0x277ea0 - 0x278180
void sub_00277EA0_0x277ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277EA0_0x277ea0");
#endif

    switch (ctx->pc) {
        case 0x277ebcu: goto label_277ebc;
        case 0x277eccu: goto label_277ecc;
        case 0x277edcu: goto label_277edc;
        case 0x277f2cu: goto label_277f2c;
        case 0x277f4cu: goto label_277f4c;
        case 0x277f88u: goto label_277f88;
        case 0x277fc0u: goto label_277fc0;
        case 0x277fd4u: goto label_277fd4;
        case 0x277fe8u: goto label_277fe8;
        case 0x277ffcu: goto label_277ffc;
        case 0x278018u: goto label_278018;
        case 0x278028u: goto label_278028;
        case 0x27803cu: goto label_27803c;
        case 0x27804cu: goto label_27804c;
        case 0x278058u: goto label_278058;
        case 0x278064u: goto label_278064;
        case 0x278078u: goto label_278078;
        case 0x278084u: goto label_278084;
        case 0x278098u: goto label_278098;
        case 0x2780a8u: goto label_2780a8;
        case 0x2780c4u: goto label_2780c4;
        case 0x2780d4u: goto label_2780d4;
        case 0x2780ecu: goto label_2780ec;
        case 0x27814cu: goto label_27814c;
        case 0x27816cu: goto label_27816c;
        default: break;
    }

    ctx->pc = 0x277ea0u;

    // 0x277ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x277eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277eb0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x277eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277eb4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x277EB4u;
    SET_GPR_U32(ctx, 31, 0x277EBCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x277EB4u, 0x277EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EBCu;
label_277ebc:
    // 0x277ebc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ec0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x277ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x277ec4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x277EC4u;
    SET_GPR_U32(ctx, 31, 0x277ECCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x277EC4u, 0x277ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277ECCu;
label_277ecc:
    // 0x277ecc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ed0: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x277ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x277ed4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x277ED4u;
    SET_GPR_U32(ctx, 31, 0x277EDCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x277ED4u, 0x277EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EDCu;
label_277edc:
    // 0x277edc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277ee4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x277ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x277EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277EF0u;
    // 0x277ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x277efc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x277efcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x277f00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277F04u;
    {
        const bool branch_taken_0x277f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277f04) {
            ctx->pc = 0x277F4Cu;
            goto label_277f4c;
        }
    }
    ctx->pc = 0x277F0Cu;
    // 0x277f0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x277f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x277f10: 0x24635ed0  addiu       $v1, $v1, 0x5ED0
    ctx->pc = 0x277f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24272));
    // 0x277f14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x277f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x277f1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x277f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f24: 0xc09d150  jal         func_274540
    ctx->pc = 0x277F24u;
    SET_GPR_U32(ctx, 31, 0x277F2Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x277F24u, 0x277F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F2Cu;
label_277f2c:
    // 0x277f2c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x277f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277f30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x277f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x277f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x277f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x277f38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277F38u;
    {
        const bool branch_taken_0x277f38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x277f38) {
            ctx->pc = 0x277F4Cu;
            goto label_277f4c;
        }
    }
    ctx->pc = 0x277F40u;
    // 0x277f40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x277f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f44: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x277F44u;
    SET_GPR_U32(ctx, 31, 0x277F4Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x277F44u, 0x277F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F4Cu;
label_277f4c:
    // 0x277f4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277f54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x277f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277f58: 0x3e00008  jr          $ra
    ctx->pc = 0x277F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277F60u;
    // 0x277f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x277f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x277f64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x277f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x277f68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277f6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277f78: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x277f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x277f7c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x277f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277f80: 0xc09d248  jal         func_274920
    ctx->pc = 0x277F80u;
    SET_GPR_U32(ctx, 31, 0x277F88u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x277F80u, 0x277F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F88u;
label_277f88:
    // 0x277f88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x277f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277f8c: 0x10430053  beq         $v0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x277F8Cu;
    {
        const bool branch_taken_0x277f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277f8c) {
            ctx->pc = 0x2780DCu;
            goto label_2780dc;
        }
    }
    ctx->pc = 0x277F94u;
    // 0x277f94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277f98: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x277F98u;
    {
        const bool branch_taken_0x277f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277f98) {
            ctx->pc = 0x277FB4u;
            goto label_277fb4;
        }
    }
    ctx->pc = 0x277FA0u;
    // 0x277fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277fa4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277FA4u;
    {
        const bool branch_taken_0x277fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x277fa4) {
            ctx->pc = 0x277FB4u;
            goto label_277fb4;
        }
    }
    ctx->pc = 0x277FACu;
    // 0x277fac: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x277FACu;
    {
        const bool branch_taken_0x277fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277fac) {
            ctx->pc = 0x2780ECu;
            goto label_2780ec;
        }
    }
    ctx->pc = 0x277FB4u;
label_277fb4:
    // 0x277fb4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x277fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277fb8: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277FB8u;
    SET_GPR_U32(ctx, 31, 0x277FC0u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277FB8u, 0x277FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FC0u;
label_277fc0:
    // 0x277fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fc4: 0x2405051c  addiu       $a1, $zero, 0x51C
    ctx->pc = 0x277fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x277fc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x277fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277fcc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x277FCCu;
    SET_GPR_U32(ctx, 31, 0x277FD4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x277FCCu, 0x277FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FD4u;
label_277fd4:
    // 0x277fd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x277fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x277fd8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x277fd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277fdc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277fe0: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x277FE0u;
    SET_GPR_U32(ctx, 31, 0x277FE8u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x277FE0u, 0x277FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FE8u;
label_277fe8:
    // 0x277fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fec: 0x2405051b  addiu       $a1, $zero, 0x51B
    ctx->pc = 0x277fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1307));
    // 0x277ff0: 0x2786a218  addiu       $a2, $gp, -0x5DE8
    ctx->pc = 0x277ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943256));
    // 0x277ff4: 0xc041a50  jal         func_106940
    ctx->pc = 0x277FF4u;
    SET_GPR_U32(ctx, 31, 0x277FFCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x277FF4u, 0x277FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FFCu;
label_277ffc:
    // 0x277ffc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278000: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x278004: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x278004u;
    {
        const bool branch_taken_0x278004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278004) {
            ctx->pc = 0x2780C4u;
            goto label_2780c4;
        }
    }
    ctx->pc = 0x27800Cu;
    // 0x27800c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x278010: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x278010u;
    SET_GPR_U32(ctx, 31, 0x278018u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x278010u, 0x278018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278018u;
label_278018:
    // 0x278018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x278018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27801c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27801cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278020: 0xc040304  jal         func_100C10
    ctx->pc = 0x278020u;
    SET_GPR_U32(ctx, 31, 0x278028u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x278020u, 0x278028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278028u;
label_278028:
    // 0x278028: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x278028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27802c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x278030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278034: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x278034u;
    SET_GPR_U32(ctx, 31, 0x27803Cu);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x278034u, 0x27803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27803Cu;
label_27803c:
    // 0x27803c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27803cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x278040: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x278040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278044: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x278044u;
    SET_GPR_U32(ctx, 31, 0x27804Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x278044u, 0x27804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27804Cu;
label_27804c:
    // 0x27804c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27804cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278050: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x278050u;
    {
        const bool branch_taken_0x278050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278050) {
            ctx->pc = 0x27809Cu;
            goto label_27809c;
        }
    }
    ctx->pc = 0x278058u;
label_278058:
    // 0x278058: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x278058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x27805c: 0xc041b40  jal         func_106D00
    ctx->pc = 0x27805Cu;
    SET_GPR_U32(ctx, 31, 0x278064u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x27805Cu, 0x278064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278064u;
label_278064:
    // 0x278064: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x278064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278068: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x278068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27806c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27806cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278070: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x278070u;
    SET_GPR_U32(ctx, 31, 0x278078u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x278070u, 0x278078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278078u;
label_278078:
    // 0x278078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27807c: 0xc041874  jal         func_1061D0
    ctx->pc = 0x27807Cu;
    SET_GPR_U32(ctx, 31, 0x278084u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x27807Cu, 0x278084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278084u;
label_278084:
    // 0x278084: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x278084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x278088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27808c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278090: 0xc041b24  jal         func_106C90
    ctx->pc = 0x278090u;
    SET_GPR_U32(ctx, 31, 0x278098u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x278090u, 0x278098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278098u;
label_278098:
    // 0x278098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27809c:
    // 0x27809c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2780a0: 0xc043104  jal         func_10C410
    ctx->pc = 0x2780A0u;
    SET_GPR_U32(ctx, 31, 0x2780A8u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x2780A0u, 0x2780A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780A8u;
label_2780a8:
    // 0x2780a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2780a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2780ac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2780ACu;
    {
        const bool branch_taken_0x2780ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2780ac) {
            ctx->pc = 0x278058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278058;
        }
    }
    ctx->pc = 0x2780B4u;
    // 0x2780b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2780b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2780b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2780bc: 0xc051428  jal         func_1450A0
    ctx->pc = 0x2780BCu;
    SET_GPR_U32(ctx, 31, 0x2780C4u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x2780BCu, 0x2780C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780C4u;
label_2780c4:
    // 0x2780c4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2780c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2780c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2780c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2780cc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2780CCu;
    SET_GPR_U32(ctx, 31, 0x2780D4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2780CCu, 0x2780D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780D4u;
label_2780d4:
    // 0x2780d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2780D4u;
    {
        const bool branch_taken_0x2780d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780d4) {
            ctx->pc = 0x2780ECu;
            goto label_2780ec;
        }
    }
    ctx->pc = 0x2780DCu;
label_2780dc:
    // 0x2780dc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2780dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2780e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2780e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2780e4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2780E4u;
    SET_GPR_U32(ctx, 31, 0x2780ECu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2780E4u, 0x2780ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780ECu;
label_2780ec:
    // 0x2780ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2780ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2780f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2780f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2780f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2780f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2780f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2780f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2780fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2780fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278100: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x278100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x278104: 0x3e00008  jr          $ra
    ctx->pc = 0x278104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27810Cu;
    // 0x27810c: 0x0  nop
    ctx->pc = 0x27810cu;
    // NOP
    // 0x278110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27811c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27811cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x278120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278124: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x278124u;
    {
        const bool branch_taken_0x278124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278124) {
            ctx->pc = 0x27816Cu;
            goto label_27816c;
        }
    }
    ctx->pc = 0x27812Cu;
    // 0x27812c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27812cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x278130: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x278130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x278134: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x278138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27813c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278144: 0xc09d150  jal         func_274540
    ctx->pc = 0x278144u;
    SET_GPR_U32(ctx, 31, 0x27814Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x278144u, 0x27814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27814Cu;
label_27814c:
    // 0x27814c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27814cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278150: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x278150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x278154: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278158: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278158u;
    {
        const bool branch_taken_0x278158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x278158) {
            ctx->pc = 0x27816Cu;
            goto label_27816c;
        }
    }
    ctx->pc = 0x278160u;
    // 0x278160: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278164: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x278164u;
    SET_GPR_U32(ctx, 31, 0x27816Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x278164u, 0x27816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27816Cu;
label_27816c:
    // 0x27816c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278174: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278178: 0x3e00008  jr          $ra
    ctx->pc = 0x278178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278180u;
}
