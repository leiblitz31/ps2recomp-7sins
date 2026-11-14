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

// Function: sub_003FAA58
// Address: 0x3faa58 - 0x3fae98
void sub_003FAA58_0x3faa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAA58_0x3faa58");
#endif

    switch (ctx->pc) {
        case 0x3faab0u: goto label_3faab0;
        case 0x3faad4u: goto label_3faad4;
        case 0x3faae0u: goto label_3faae0;
        case 0x3fab30u: goto label_3fab30;
        case 0x3fab44u: goto label_3fab44;
        case 0x3fab54u: goto label_3fab54;
        case 0x3fab6cu: goto label_3fab6c;
        case 0x3fab90u: goto label_3fab90;
        case 0x3fabc8u: goto label_3fabc8;
        case 0x3fabf8u: goto label_3fabf8;
        case 0x3fac0cu: goto label_3fac0c;
        case 0x3fac1cu: goto label_3fac1c;
        case 0x3fac34u: goto label_3fac34;
        case 0x3fac58u: goto label_3fac58;
        case 0x3fac98u: goto label_3fac98;
        case 0x3facacu: goto label_3facac;
        case 0x3facc0u: goto label_3facc0;
        case 0x3facdcu: goto label_3facdc;
        case 0x3fad08u: goto label_3fad08;
        case 0x3fadbcu: goto label_3fadbc;
        case 0x3fadd4u: goto label_3fadd4;
        case 0x3fae68u: goto label_3fae68;
        default: break;
    }

    ctx->pc = 0x3faa58u;

    // 0x3faa58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3faa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3faa5c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3faa5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faa60: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3faa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3faa64: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3faa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3faa68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3faa68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faa6c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3faa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3faa70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3faa70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faa74: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x3faa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x3faa78: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3faa78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faa7c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3faa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3faa80: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3faa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3faa84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3faa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3faa88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3faa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3faa8c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3faa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3faa90: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3faa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3faa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3faa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3faa98: 0xde620118  ld          $v0, 0x118($s3)
    ctx->pc = 0x3faa98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3faa9c: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x3faa9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3faaa0: 0x22878  dsll        $a1, $v0, 1
    ctx->pc = 0x3faaa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 1);
    // 0x3faaa4: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x3faaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3faaa8: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FAAA8u;
    SET_GPR_U32(ctx, 31, 0x3FAAB0u);
    ctx->pc = 0x3FAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAAA8u;
    // 0x3faaac: 0x528f8  dsll        $a1, $a1, 3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FAAA8u, 0x3FAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAAB0u;
label_3faab0:
    // 0x3faab0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3faab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3faab4: 0xde620118  ld          $v0, 0x118($s3)
    ctx->pc = 0x3faab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3faab8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3faab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3faabc: 0x23078  dsll        $a2, $v0, 1
    ctx->pc = 0x3faabcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 1);
    // 0x3faac0: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x3faac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3faac4: 0x630fc  dsll32      $a2, $a2, 3
    ctx->pc = 0x3faac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 3));
    // 0x3faac8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3faac8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3faacc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FAACCu;
    SET_GPR_U32(ctx, 31, 0x3FAAD4u);
    ctx->pc = 0x3FAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAACCu;
    // 0x3faad0: 0x8e650114  lw          $a1, 0x114($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FAACCu, 0x3FAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAAD4u;
label_3faad4:
    // 0x3faad4: 0x8e650114  lw          $a1, 0x114($s3)
    ctx->pc = 0x3faad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x3faad8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FAAD8u;
    SET_GPR_U32(ctx, 31, 0x3FAAE0u);
    ctx->pc = 0x3FAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAAD8u;
    // 0x3faadc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FAAD8u, 0x3FAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAAE0u;
label_3faae0:
    // 0x3faae0: 0xae600114  sw          $zero, 0x114($s3)
    ctx->pc = 0x3faae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
    // 0x3faae4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3faae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3faae8: 0x1880008f  blez        $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3FAAE8u;
    {
        const bool branch_taken_0x3faae8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3FAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAE8u;
        // 0x3faaec: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faae8) {
            ctx->pc = 0x3FAD28u;
            goto label_3fad28;
        }
    }
    ctx->pc = 0x3FAAF0u;
    // 0x3faaf0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3faaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3faaf4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3faaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3faaf8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3faaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3faafc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3FAAFCu;
    {
        const bool branch_taken_0x3faafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAAFCu;
        // 0x3fab00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faafc) {
            ctx->pc = 0x3FABACu;
            goto label_3fabac;
        }
    }
    ctx->pc = 0x3FAB04u;
    // 0x3fab04: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x3fab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3fab08: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3fab08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3fab0c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3fab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x3fab10: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3fab10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fab14: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3fab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3fab18: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3fab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3fab1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3fab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fab20: 0x400013  mtlo        $v0
    ctx->pc = 0x3fab20u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3fab24: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3fab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3fab28: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FAB28u;
    SET_GPR_U32(ctx, 31, 0x3FAB30u);
    ctx->pc = 0x3FAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB28u;
    // 0x3fab2c: 0x70658000  madd        $s0, $v1, $a1 (Delay Slot)
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FAB28u, 0x3FAB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB30u;
label_3fab30:
    // 0x3fab30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fab34: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fab38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fab3c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FAB3Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB44u);
    ctx->pc = 0x3FAB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB3Cu;
    // 0x3fab40: 0x2283e  dsrl32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FAB3Cu, 0x3FAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB44u;
label_3fab44:
    // 0x3fab44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3fab44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3fab48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fab4c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FAB4Cu;
    SET_GPR_U32(ctx, 31, 0x3FAB54u);
    ctx->pc = 0x3FAB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB4Cu;
    // 0x3fab50: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FAB4Cu, 0x3FAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB54u;
label_3fab54:
    // 0x3fab54: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3fab54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3fab58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fab5c: 0x22878  dsll        $a1, $v0, 1
    ctx->pc = 0x3fab5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 1);
    // 0x3fab60: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x3fab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3fab64: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FAB64u;
    SET_GPR_U32(ctx, 31, 0x3FAB6Cu);
    ctx->pc = 0x3FAB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB64u;
    // 0x3fab68: 0x528f8  dsll        $a1, $a1, 3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FAB64u, 0x3FAB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB6Cu;
label_3fab6c:
    // 0x3fab6c: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x3fab6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3fab70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fab70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fab74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3fab74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3fab78: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x3fab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
    // 0x3fab7c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3fab7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3fab80: 0x230fc  dsll32      $a2, $v0, 3
    ctx->pc = 0x3fab80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 3));
    // 0x3fab84: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fab84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fab88: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FAB88u;
    SET_GPR_U32(ctx, 31, 0x3FAB90u);
    ctx->pc = 0x3FAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAB88u;
    // 0x3fab8c: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FAB88u, 0x3FAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAB90u;
label_3fab90:
    // 0x3fab90: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x3fab90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3fab94: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x3fab94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x3fab98: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x3fab98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3fab9c: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x3fab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3faba0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3faba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3faba4: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x3FABA4u;
    {
        const bool branch_taken_0x3faba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FABA4u;
        // 0x3faba8: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faba4) {
            ctx->pc = 0x3FAD28u;
            goto label_3fad28;
        }
    }
    ctx->pc = 0x3FABACu;
label_3fabac:
    // 0x3fabac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fabacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fabb0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3fabb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fabb4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3fabb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fabb8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3fabb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fabbc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3fabbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fabc0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3fabc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fabc4: 0x0  nop
    ctx->pc = 0x3fabc4u;
    // NOP
label_3fabc8:
    // 0x3fabc8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3fabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3fabcc: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x3fabccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3fabd0: 0x400013  mtlo        $v0
    ctx->pc = 0x3fabd0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3fabd4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3fabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3fabd8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3fabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3fabdc: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3fabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3fabe0: 0x70621800  madd        $v1, $v1, $v0
    ctx->pc = 0x3fabe0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3fabe4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x3fabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3fabe8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3fabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3fabec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3fabecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3fabf0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FABF0u;
    SET_GPR_U32(ctx, 31, 0x3FABF8u);
    ctx->pc = 0x3FABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FABF0u;
    // 0x3fabf4: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FABF0u, 0x3FABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FABF8u;
label_3fabf8:
    // 0x3fabf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fabfc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fabfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fac00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fac04: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FAC04u;
    SET_GPR_U32(ctx, 31, 0x3FAC0Cu);
    ctx->pc = 0x3FAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAC04u;
    // 0x3fac08: 0x2283e  dsrl32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FAC04u, 0x3FAC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC0Cu;
label_3fac0c:
    // 0x3fac0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3fac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3fac10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fac10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fac14: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FAC14u;
    SET_GPR_U32(ctx, 31, 0x3FAC1Cu);
    ctx->pc = 0x3FAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAC14u;
    // 0x3fac18: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FAC14u, 0x3FAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC1Cu;
label_3fac1c:
    // 0x3fac1c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x3fac1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3fac20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fac24: 0x22878  dsll        $a1, $v0, 1
    ctx->pc = 0x3fac24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 1);
    // 0x3fac28: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x3fac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3fac2c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FAC2Cu;
    SET_GPR_U32(ctx, 31, 0x3FAC34u);
    ctx->pc = 0x3FAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAC2Cu;
    // 0x3fac30: 0x528f8  dsll        $a1, $a1, 3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FAC2Cu, 0x3FAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC34u;
label_3fac34:
    // 0x3fac34: 0xdec30010  ld          $v1, 0x10($s6)
    ctx->pc = 0x3fac34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3fac38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fac3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3fac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3fac40: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x3fac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
    // 0x3fac44: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3fac44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3fac48: 0x230fc  dsll32      $a2, $v0, 3
    ctx->pc = 0x3fac48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 3));
    // 0x3fac4c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fac4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fac50: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FAC50u;
    SET_GPR_U32(ctx, 31, 0x3FAC58u);
    ctx->pc = 0x3FAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAC50u;
    // 0x3fac54: 0x8ea50008  lw          $a1, 0x8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FAC50u, 0x3FAC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC58u;
label_3fac58:
    // 0x3fac58: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x3fac58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3fac5c: 0xdee30010  ld          $v1, 0x10($s7)
    ctx->pc = 0x3fac5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3fac60: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x3fac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x3fac64: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x3fac64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x3fac68: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x3fac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x3fac6c: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x3fac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x3fac70: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x3fac70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3fac74: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x3fac74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fac78: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3fac78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3fac7c: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x3fac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3fac80: 0xa00013  mtlo        $a1
    ctx->pc = 0x3fac80u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x3fac84: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x3fac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3fac88: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3fac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3fac8c: 0x70651800  madd        $v1, $v1, $a1
    ctx->pc = 0x3fac8cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3fac90: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FAC90u;
    SET_GPR_U32(ctx, 31, 0x3FAC98u);
    ctx->pc = 0x3FAC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAC90u;
    // 0x3fac94: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FAC90u, 0x3FAC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAC98u;
label_3fac98:
    // 0x3fac98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fac9c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faca0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3faca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3faca4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FACA4u;
    SET_GPR_U32(ctx, 31, 0x3FACACu);
    ctx->pc = 0x3FACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FACA4u;
    // 0x3faca8: 0x2283e  dsrl32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FACA4u, 0x3FACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FACACu;
label_3facac:
    // 0x3facac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3facacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3facb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3facb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3facb4: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x3facb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3facb8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FACB8u;
    SET_GPR_U32(ctx, 31, 0x3FACC0u);
    ctx->pc = 0x3FACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FACB8u;
    // 0x3facbc: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FACB8u, 0x3FACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FACC0u;
label_3facc0:
    // 0x3facc0: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x3facc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x3facc4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3facc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3facc8: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x3facc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x3faccc: 0x22878  dsll        $a1, $v0, 1
    ctx->pc = 0x3facccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 1);
    // 0x3facd0: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x3facd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3facd4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FACD4u;
    SET_GPR_U32(ctx, 31, 0x3FACDCu);
    ctx->pc = 0x3FACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FACD4u;
    // 0x3facd8: 0x528f8  dsll        $a1, $a1, 3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FACD4u, 0x3FACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FACDCu;
label_3facdc:
    // 0x3facdc: 0xdec30028  ld          $v1, 0x28($s6)
    ctx->pc = 0x3facdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x3face0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3face0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3face4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3face4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3face8: 0x26d60030  addiu       $s6, $s6, 0x30
    ctx->pc = 0x3face8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x3facec: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x3facecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
    // 0x3facf0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3facf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3facf4: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x3facf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3facf8: 0x230fc  dsll32      $a2, $v0, 3
    ctx->pc = 0x3facf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 3));
    // 0x3facfc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3facfcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fad00: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FAD00u;
    SET_GPR_U32(ctx, 31, 0x3FAD08u);
    ctx->pc = 0x3FAD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAD00u;
    // 0x3fad04: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FAD00u, 0x3FAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAD08u;
label_3fad08:
    // 0x3fad08: 0xdee30028  ld          $v1, 0x28($s7)
    ctx->pc = 0x3fad08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x3fad0c: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x3fad0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x3fad10: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x3fad10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x3fad14: 0x9224001c  lbu         $a0, 0x1C($s1)
    ctx->pc = 0x3fad14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3fad18: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x3fad18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x3fad1c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x3fad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3fad20: 0x14e0ffa9  bnez        $a3, . + 4 + (-0x57 << 2)
    ctx->pc = 0x3FAD20u;
    {
        const bool branch_taken_0x3fad20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD20u;
        // 0x3fad24: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fad20) {
            ctx->pc = 0x3FABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fabc8;
        }
    }
    ctx->pc = 0x3FAD28u;
label_3fad28:
    // 0x3fad28: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x3fad28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3fad2c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x3fad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fad30: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x3fad30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fad34: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3fad34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3fad38: 0xde630118  ld          $v1, 0x118($s3)
    ctx->pc = 0x3fad38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3fad3c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3fad3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3fad40: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x3fad40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3fad44: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3fad44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3fad48: 0xe3182d  daddu       $v1, $a3, $v1
    ctx->pc = 0x3fad48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3fad4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3fad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3fad50: 0xfe630118  sd          $v1, 0x118($s3)
    ctx->pc = 0x3fad50u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 280), GPR_U64(ctx, 3));
    // 0x3fad54: 0xae650114  sw          $a1, 0x114($s3)
    ctx->pc = 0x3fad54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 5));
    // 0x3fad58: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x3fad58u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x3fad5c: 0xfe640010  sd          $a0, 0x10($s3)
    ctx->pc = 0x3fad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 4));
    // 0x3fad60: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3fad60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3fad64: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3fad64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3fad68: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3fad68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fad6c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3fad6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fad70: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3fad70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fad74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fad74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fad78: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3fad78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fad7c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3fad7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fad80: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3fad80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fad84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fad88: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAD88u;
        // 0x3fad8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FAD90u;
    // 0x3fad90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3fad94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3fad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3fad98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fad9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fad9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fada0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fada4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fada8: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x3fada8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x3fadac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FADACu;
    {
        const bool branch_taken_0x3fadac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fadac) {
            ctx->pc = 0x3FADBCu;
            goto label_3fadbc;
        }
    }
    ctx->pc = 0x3FADB4u;
    // 0x3fadb4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FADB4u;
    SET_GPR_U32(ctx, 31, 0x3FADBCu);
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FADB4u, 0x3FADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FADBCu;
label_3fadbc:
    // 0x3fadbc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3fadbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3fadc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fadc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3fadc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fadc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fadc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fadc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fadcc: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FADCCu;
    SET_GPR_U32(ctx, 31, 0x3FADD4u);
    ctx->pc = 0x3FADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FADCCu;
    // 0x3fadd0: 0xae02015c  sw          $v0, 0x15C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FADCCu, 0x3FADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FADD4u;
label_3fadd4:
    // 0x3fadd4: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x3fadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x3fadd8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x3fadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x3faddc: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3faddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x3fade0: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x3fade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x3fade4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3fade4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fade8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fade8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fadec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fadecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fadf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FADF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FADF0u;
        // 0x3fadf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FADF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FADF8u;
    // 0x3fadf8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FADF8u;
    {
        const bool branch_taken_0x3fadf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FADF8u;
        // 0x3fadfc: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fadf8) {
            ctx->pc = 0x3FAE10u;
            goto label_3fae10;
        }
    }
    ctx->pc = 0x3FAE00u;
    // 0x3fae00: 0x908202d8  lbu         $v0, 0x2D8($a0)
    ctx->pc = 0x3fae00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x3fae04: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3fae04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3fae08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fae0c: 0xa08202d8  sb          $v0, 0x2D8($a0)
    ctx->pc = 0x3fae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 728), (uint8_t)GPR_U32(ctx, 2));
label_3fae10:
    // 0x3fae10: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FAE18u;
    // 0x3fae18: 0xac8502c0  sw          $a1, 0x2C0($a0)
    ctx->pc = 0x3fae18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 5));
    // 0x3fae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE1Cu;
        // 0x3fae20: 0xac8602c4  sw          $a2, 0x2C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 708), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FAE24u;
    // 0x3fae24: 0x0  nop
    ctx->pc = 0x3fae24u;
    // NOP
    // 0x3fae28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3fae2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3fae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3fae30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3fae34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fae34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fae38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fae3c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FAE3Cu;
    {
        const bool branch_taken_0x3fae3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE3Cu;
        // 0x3fae40: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fae3c) {
            ctx->pc = 0x3FAE80u;
            goto label_3fae80;
        }
    }
    ctx->pc = 0x3FAE44u;
    // 0x3fae44: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3FAE44u;
    {
        const bool branch_taken_0x3fae44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fae44) {
            ctx->pc = 0x3FAE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FAE44u;
            // 0x3fae48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FAE84u;
            goto label_3fae84;
        }
    }
    ctx->pc = 0x3FAE4Cu;
    // 0x3fae4c: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x3fae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3fae50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FAE50u;
    {
        const bool branch_taken_0x3fae50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fae50) {
            ctx->pc = 0x3FAE68u;
            goto label_3fae68;
        }
    }
    ctx->pc = 0x3FAE58u;
    // 0x3fae58: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FAE58u;
    {
        const bool branch_taken_0x3fae58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3FAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE58u;
        // 0x3fae5c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fae58) {
            ctx->pc = 0x3FAE68u;
            goto label_3fae68;
        }
    }
    ctx->pc = 0x3FAE60u;
    // 0x3fae60: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3FAE60u;
    SET_GPR_U32(ctx, 31, 0x3FAE68u);
    ctx->pc = 0x3FAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAE60u;
    // 0x3fae64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3FAE60u, 0x3FAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAE68u;
label_3fae68:
    // 0x3fae68: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FAE68u;
    {
        const bool branch_taken_0x3fae68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE68u;
        // 0x3fae6c: 0xae110140  sw          $s1, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fae68) {
            ctx->pc = 0x3FAE80u;
            goto label_3fae80;
        }
    }
    ctx->pc = 0x3FAE70u;
    // 0x3fae70: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fae70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fae74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3fae74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3fae78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fae7c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x3fae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_3fae80:
    // 0x3fae80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3fae80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fae84:
    // 0x3fae84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fae84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fae88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fae8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAE8Cu;
        // 0x3fae90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FAE94u;
    // 0x3fae94: 0x0  nop
    ctx->pc = 0x3fae94u;
    // NOP
    ctx->pc = 0x3fae98u;
}
