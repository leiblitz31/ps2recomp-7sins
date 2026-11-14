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

// Function: sub_003BAF58
// Address: 0x3baf58 - 0x3bb130
void sub_003BAF58_0x3baf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BAF58_0x3baf58");
#endif

    switch (ctx->pc) {
        case 0x3baf58u: goto label_3baf58;
        case 0x3baf5cu: goto label_3baf5c;
        case 0x3baf60u: goto label_3baf60;
        case 0x3baf64u: goto label_3baf64;
        case 0x3baf68u: goto label_3baf68;
        case 0x3baf6cu: goto label_3baf6c;
        case 0x3baf70u: goto label_3baf70;
        case 0x3baf74u: goto label_3baf74;
        case 0x3baf78u: goto label_3baf78;
        case 0x3baf7cu: goto label_3baf7c;
        case 0x3baf80u: goto label_3baf80;
        case 0x3baf84u: goto label_3baf84;
        case 0x3baf88u: goto label_3baf88;
        case 0x3baf8cu: goto label_3baf8c;
        case 0x3baf90u: goto label_3baf90;
        case 0x3baf94u: goto label_3baf94;
        case 0x3baf98u: goto label_3baf98;
        case 0x3baf9cu: goto label_3baf9c;
        case 0x3bafa0u: goto label_3bafa0;
        case 0x3bafa4u: goto label_3bafa4;
        case 0x3bafa8u: goto label_3bafa8;
        case 0x3bafacu: goto label_3bafac;
        case 0x3bafb0u: goto label_3bafb0;
        case 0x3bafb4u: goto label_3bafb4;
        case 0x3bafb8u: goto label_3bafb8;
        case 0x3bafbcu: goto label_3bafbc;
        case 0x3bafc0u: goto label_3bafc0;
        case 0x3bafc4u: goto label_3bafc4;
        case 0x3bafc8u: goto label_3bafc8;
        case 0x3bafccu: goto label_3bafcc;
        case 0x3bafd0u: goto label_3bafd0;
        case 0x3bafd4u: goto label_3bafd4;
        case 0x3bafd8u: goto label_3bafd8;
        case 0x3bafdcu: goto label_3bafdc;
        case 0x3bafe0u: goto label_3bafe0;
        case 0x3bafe4u: goto label_3bafe4;
        case 0x3bafe8u: goto label_3bafe8;
        case 0x3bafecu: goto label_3bafec;
        case 0x3baff0u: goto label_3baff0;
        case 0x3baff4u: goto label_3baff4;
        case 0x3baff8u: goto label_3baff8;
        case 0x3baffcu: goto label_3baffc;
        case 0x3bb000u: goto label_3bb000;
        case 0x3bb004u: goto label_3bb004;
        case 0x3bb008u: goto label_3bb008;
        case 0x3bb00cu: goto label_3bb00c;
        case 0x3bb010u: goto label_3bb010;
        case 0x3bb014u: goto label_3bb014;
        case 0x3bb018u: goto label_3bb018;
        case 0x3bb01cu: goto label_3bb01c;
        case 0x3bb020u: goto label_3bb020;
        case 0x3bb024u: goto label_3bb024;
        case 0x3bb028u: goto label_3bb028;
        case 0x3bb02cu: goto label_3bb02c;
        case 0x3bb030u: goto label_3bb030;
        case 0x3bb034u: goto label_3bb034;
        case 0x3bb038u: goto label_3bb038;
        case 0x3bb03cu: goto label_3bb03c;
        case 0x3bb040u: goto label_3bb040;
        case 0x3bb044u: goto label_3bb044;
        case 0x3bb048u: goto label_3bb048;
        case 0x3bb04cu: goto label_3bb04c;
        case 0x3bb050u: goto label_3bb050;
        case 0x3bb054u: goto label_3bb054;
        case 0x3bb058u: goto label_3bb058;
        case 0x3bb05cu: goto label_3bb05c;
        case 0x3bb060u: goto label_3bb060;
        case 0x3bb064u: goto label_3bb064;
        case 0x3bb068u: goto label_3bb068;
        case 0x3bb06cu: goto label_3bb06c;
        case 0x3bb070u: goto label_3bb070;
        case 0x3bb074u: goto label_3bb074;
        case 0x3bb078u: goto label_3bb078;
        case 0x3bb07cu: goto label_3bb07c;
        case 0x3bb080u: goto label_3bb080;
        case 0x3bb084u: goto label_3bb084;
        case 0x3bb088u: goto label_3bb088;
        case 0x3bb08cu: goto label_3bb08c;
        case 0x3bb090u: goto label_3bb090;
        case 0x3bb094u: goto label_3bb094;
        case 0x3bb098u: goto label_3bb098;
        case 0x3bb09cu: goto label_3bb09c;
        case 0x3bb0a0u: goto label_3bb0a0;
        case 0x3bb0a4u: goto label_3bb0a4;
        case 0x3bb0a8u: goto label_3bb0a8;
        case 0x3bb0acu: goto label_3bb0ac;
        case 0x3bb0b0u: goto label_3bb0b0;
        case 0x3bb0b4u: goto label_3bb0b4;
        case 0x3bb0b8u: goto label_3bb0b8;
        case 0x3bb0bcu: goto label_3bb0bc;
        case 0x3bb0c0u: goto label_3bb0c0;
        case 0x3bb0c4u: goto label_3bb0c4;
        case 0x3bb0c8u: goto label_3bb0c8;
        case 0x3bb0ccu: goto label_3bb0cc;
        case 0x3bb0d0u: goto label_3bb0d0;
        case 0x3bb0d4u: goto label_3bb0d4;
        case 0x3bb0d8u: goto label_3bb0d8;
        case 0x3bb0dcu: goto label_3bb0dc;
        case 0x3bb0e0u: goto label_3bb0e0;
        case 0x3bb0e4u: goto label_3bb0e4;
        case 0x3bb0e8u: goto label_3bb0e8;
        case 0x3bb0ecu: goto label_3bb0ec;
        case 0x3bb0f0u: goto label_3bb0f0;
        case 0x3bb0f4u: goto label_3bb0f4;
        case 0x3bb0f8u: goto label_3bb0f8;
        case 0x3bb0fcu: goto label_3bb0fc;
        case 0x3bb100u: goto label_3bb100;
        case 0x3bb104u: goto label_3bb104;
        case 0x3bb108u: goto label_3bb108;
        case 0x3bb10cu: goto label_3bb10c;
        case 0x3bb110u: goto label_3bb110;
        case 0x3bb114u: goto label_3bb114;
        case 0x3bb118u: goto label_3bb118;
        case 0x3bb11cu: goto label_3bb11c;
        case 0x3bb120u: goto label_3bb120;
        case 0x3bb124u: goto label_3bb124;
        case 0x3bb128u: goto label_3bb128;
        case 0x3bb12cu: goto label_3bb12c;
        default: break;
    }

    ctx->pc = 0x3baf58u;

label_3baf58:
    // 0x3baf58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3baf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3baf5c:
    // 0x3baf5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3baf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3baf60:
    // 0x3baf60: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3baf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3baf64:
    // 0x3baf64: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3baf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3baf68:
    // 0x3baf68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3baf68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3baf6c:
    // 0x3baf6c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3baf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3baf70:
    // 0x3baf70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3baf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3baf74:
    // 0x3baf74: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3baf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3baf78:
    // 0x3baf78: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3baf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3baf7c:
    // 0x3baf7c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3baf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3baf80:
    // 0x3baf80: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3baf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3baf84:
    // 0x3baf84: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3baf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3baf88:
    // 0x3baf88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3baf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3baf8c:
    // 0x3baf8c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3baf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3baf90:
    // 0x3baf90: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_3baf94:
    if (ctx->pc == 0x3BAF94u) {
        ctx->pc = 0x3BAF98u;
        goto label_3baf98;
    }
    ctx->pc = 0x3BAF90u;
    {
        const bool branch_taken_0x3baf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3baf90) {
            ctx->pc = 0x3BB008u;
            goto label_3bb008;
        }
    }
    ctx->pc = 0x3BAF98u;
label_3baf98:
    // 0x3baf98: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x3baf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3baf9c:
    // 0x3baf9c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3baf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3bafa0:
    // 0x3bafa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bafa4:
    // 0x3bafa4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3bafa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3bafa8:
    // 0x3bafa8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3bafac:
    // 0x3bafac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bafacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3bafb0:
    // 0x3bafb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3bafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3bafb4:
    // 0x3bafb4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3bafb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bafb8:
    // 0x3bafb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3bafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3bafbc:
    // 0x3bafbc: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x3bafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3bafc0:
    // 0x3bafc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bafc4:
    // 0x3bafc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3bafc8:
    // 0x3bafc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3bafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3bafcc:
    // 0x3bafcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bafccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3bafd0:
    // 0x3bafd0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3bafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3bafd4:
    // 0x3bafd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3bafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3bafd8:
    // 0x3bafd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3bafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3bafdc:
    // 0x3bafdc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3bafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bafe0:
    // 0x3bafe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3bafe4:
    // 0x3bafe4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3bafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3bafe8:
    // 0x3bafe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3bafec:
    // 0x3bafec: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x3bafecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3baff0:
    // 0x3baff0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3baff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3baff4:
    // 0x3baff4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3baff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3baff8:
    // 0x3baff8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3baff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3baffc:
    // 0x3baffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3baffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3bb000:
    // 0x3bb000: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3bb004:
    if (ctx->pc == 0x3BB004u) {
        ctx->pc = 0x3BB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB000u;
        // 0x3bb004: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB008u;
        goto label_3bb008;
    }
    ctx->pc = 0x3BB000u;
    {
        const bool branch_taken_0x3bb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB000u;
        // 0x3bb004: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb000) {
            ctx->pc = 0x3BB0F8u;
            goto label_3bb0f8;
        }
    }
    ctx->pc = 0x3BB008u;
label_3bb008:
    // 0x3bb008: 0xc0eea9e  jal         func_3BAA78
label_3bb00c:
    if (ctx->pc == 0x3BB00Cu) {
        ctx->pc = 0x3BB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB008u;
        // 0x3bb00c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB010u;
        goto label_3bb010;
    }
    ctx->pc = 0x3BB008u;
    SET_GPR_U32(ctx, 31, 0x3BB010u);
    ctx->pc = 0x3BB00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB008u;
    // 0x3bb00c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAA78u, 0x3BB008u, 0x3BB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB010u;
label_3bb010:
    // 0x3bb010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bb010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb014:
    // 0x3bb014: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_3bb018:
    if (ctx->pc == 0x3BB018u) {
        ctx->pc = 0x3BB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB014u;
        // 0x3bb018: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB01Cu;
        goto label_3bb01c;
    }
    ctx->pc = 0x3BB014u;
    {
        const bool branch_taken_0x3bb014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB014u;
        // 0x3bb018: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb014) {
            ctx->pc = 0x3BB0FCu;
            goto label_3bb0fc;
        }
    }
    ctx->pc = 0x3BB01Cu;
label_3bb01c:
    // 0x3bb01c: 0xc0eeaf2  jal         func_3BABC8
label_3bb020:
    if (ctx->pc == 0x3BB020u) {
        ctx->pc = 0x3BB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB01Cu;
        // 0x3bb020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB024u;
        goto label_3bb024;
    }
    ctx->pc = 0x3BB01Cu;
    SET_GPR_U32(ctx, 31, 0x3BB024u);
    ctx->pc = 0x3BB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB01Cu;
    // 0x3bb020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BABC8u, 0x3BB01Cu, 0x3BB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB024u;
label_3bb024:
    // 0x3bb024: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3bb028:
    if (ctx->pc == 0x3BB028u) {
        ctx->pc = 0x3BB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB024u;
        // 0x3bb028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB02Cu;
        goto label_3bb02c;
    }
    ctx->pc = 0x3BB024u;
    {
        const bool branch_taken_0x3bb024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB024u;
        // 0x3bb028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb024) {
            ctx->pc = 0x3BB040u;
            goto label_3bb040;
        }
    }
    ctx->pc = 0x3BB02Cu;
label_3bb02c:
    // 0x3bb02c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3bb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3bb030:
    // 0x3bb030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bb030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bb034:
    // 0x3bb034: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3bb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3bb038:
    // 0x3bb038: 0x10000003  b           . + 4 + (0x3 << 2)
label_3bb03c:
    if (ctx->pc == 0x3BB03Cu) {
        ctx->pc = 0x3BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB038u;
        // 0x3bb03c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB040u;
        goto label_3bb040;
    }
    ctx->pc = 0x3BB038u;
    {
        const bool branch_taken_0x3bb038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB038u;
        // 0x3bb03c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb038) {
            ctx->pc = 0x3BB048u;
            goto label_3bb048;
        }
    }
    ctx->pc = 0x3BB040u;
label_3bb040:
    // 0x3bb040: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3bb040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb044:
    // 0x3bb044: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bb044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bb048:
    // 0x3bb048: 0xc0eeb48  jal         func_3BAD20
label_3bb04c:
    if (ctx->pc == 0x3BB04Cu) {
        ctx->pc = 0x3BB050u;
        goto label_3bb050;
    }
    ctx->pc = 0x3BB048u;
    SET_GPR_U32(ctx, 31, 0x3BB050u);
    ctx->pc = 0x3BAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAD20u, 0x3BB048u, 0x3BB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB050u;
label_3bb050:
    // 0x3bb050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bb050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb054:
    // 0x3bb054: 0xc0eebd6  jal         func_3BAF58
label_3bb058:
    if (ctx->pc == 0x3BB058u) {
        ctx->pc = 0x3BB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB054u;
        // 0x3bb058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB05Cu;
        goto label_3bb05c;
    }
    ctx->pc = 0x3BB054u;
    SET_GPR_U32(ctx, 31, 0x3BB05Cu);
    ctx->pc = 0x3BB058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB054u;
    // 0x3bb058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAF58u;
    goto label_3baf58;
    ctx->pc = 0x3BB05Cu;
label_3bb05c:
    // 0x3bb05c: 0xc0eebd6  jal         func_3BAF58
label_3bb060:
    if (ctx->pc == 0x3BB060u) {
        ctx->pc = 0x3BB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB05Cu;
        // 0x3bb060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB064u;
        goto label_3bb064;
    }
    ctx->pc = 0x3BB05Cu;
    SET_GPR_U32(ctx, 31, 0x3BB064u);
    ctx->pc = 0x3BB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB05Cu;
    // 0x3bb060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAF58u;
    goto label_3baf58;
    ctx->pc = 0x3BB064u;
label_3bb064:
    // 0x3bb064: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_3bb068:
    if (ctx->pc == 0x3BB068u) {
        ctx->pc = 0x3BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB064u;
        // 0x3bb068: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB06Cu;
        goto label_3bb06c;
    }
    ctx->pc = 0x3BB064u;
    {
        const bool branch_taken_0x3bb064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB064u;
        // 0x3bb068: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb064) {
            ctx->pc = 0x3BB0F8u;
            goto label_3bb0f8;
        }
    }
    ctx->pc = 0x3BB06Cu;
label_3bb06c:
    // 0x3bb06c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x3bb06cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bb070:
    // 0x3bb070: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x3bb070u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
label_3bb074:
    // 0x3bb074: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3bb074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3bb078:
    // 0x3bb078: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_3bb07c:
    if (ctx->pc == 0x3BB07Cu) {
        ctx->pc = 0x3BB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB078u;
        // 0x3bb07c: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB080u;
        goto label_3bb080;
    }
    ctx->pc = 0x3BB078u;
    {
        const bool branch_taken_0x3bb078 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB078u;
        // 0x3bb07c: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb078) {
            ctx->pc = 0x3BB0BCu;
            goto label_3bb0bc;
        }
    }
    ctx->pc = 0x3BB080u;
label_3bb080:
    // 0x3bb080: 0x26d7e880  addiu       $s7, $s6, -0x1780
    ctx->pc = 0x3bb080u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_3bb084:
    // 0x3bb084: 0x27d5ce80  addiu       $s5, $fp, -0x3180
    ctx->pc = 0x3bb084u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954624));
label_3bb088:
    // 0x3bb088: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3bb088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bb08c:
    // 0x3bb08c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3bb08cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bb090:
    // 0x3bb090: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3bb094:
    if (ctx->pc == 0x3BB094u) {
        ctx->pc = 0x3BB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB090u;
        // 0x3bb094: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB098u;
        goto label_3bb098;
    }
    ctx->pc = 0x3BB090u;
    {
        const bool branch_taken_0x3bb090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB090u;
        // 0x3bb094: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb090) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BB098u;
label_3bb098:
    // 0x3bb098: 0x8ee2011c  lw          $v0, 0x11C($s7)
    ctx->pc = 0x3bb098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
label_3bb09c:
    // 0x3bb09c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3bb09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bb0a0:
    // 0x3bb0a0: 0x8ea40534  lw          $a0, 0x534($s5)
    ctx->pc = 0x3bb0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1332)));
label_3bb0a4:
    // 0x3bb0a4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bb0a8:
    // 0x3bb0a8: 0x40f809  jalr        $v0
label_3bb0ac:
    if (ctx->pc == 0x3BB0ACu) {
        ctx->pc = 0x3BB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0A8u;
        // 0x3bb0ac: 0xac740004  sw          $s4, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB0B0u;
        goto label_3bb0b0;
    }
    ctx->pc = 0x3BB0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB0B0u);
        ctx->pc = 0x3BB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0A8u;
        // 0x3bb0ac: 0xac740004  sw          $s4, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB0A8u, 0x3BB0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB0B0u;
label_3bb0b0:
    // 0x3bb0b0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3bb0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bb0b4:
    // 0x3bb0b4: 0x1472fff6  bne         $v1, $s2, . + 4 + (-0xA << 2)
label_3bb0b8:
    if (ctx->pc == 0x3BB0B8u) {
        ctx->pc = 0x3BB0BCu;
        goto label_3bb0bc;
    }
    ctx->pc = 0x3BB0B4u;
    {
        const bool branch_taken_0x3bb0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3bb0b4) {
            ctx->pc = 0x3BB090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb090;
        }
    }
    ctx->pc = 0x3BB0BCu;
label_3bb0bc:
    // 0x3bb0bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3bb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3bb0c0:
    // 0x3bb0c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3bb0c4:
    if (ctx->pc == 0x3BB0C4u) {
        ctx->pc = 0x3BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0C0u;
        // 0x3bb0c4: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB0C8u;
        goto label_3bb0c8;
    }
    ctx->pc = 0x3BB0C0u;
    {
        const bool branch_taken_0x3bb0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0C0u;
        // 0x3bb0c4: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0c0) {
            ctx->pc = 0x3BB0D4u;
            goto label_3bb0d4;
        }
    }
    ctx->pc = 0x3BB0C8u;
label_3bb0c8:
    // 0x3bb0c8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3bb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3bb0cc:
    // 0x3bb0cc: 0x40f809  jalr        $v0
label_3bb0d0:
    if (ctx->pc == 0x3BB0D0u) {
        ctx->pc = 0x3BB0D4u;
        goto label_3bb0d4;
    }
    ctx->pc = 0x3BB0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB0D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB0CCu, 0x3BB0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB0D4u;
label_3bb0d4:
    // 0x3bb0d4: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x3bb0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_3bb0d8:
    // 0x3bb0d8: 0x27c6ce80  addiu       $a2, $fp, -0x3180
    ctx->pc = 0x3bb0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954624));
label_3bb0dc:
    // 0x3bb0dc: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3bb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3bb0e0:
    // 0x3bb0e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bb0e4:
    // 0x3bb0e4: 0x8cc40538  lw          $a0, 0x538($a2)
    ctx->pc = 0x3bb0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1336)));
label_3bb0e8:
    // 0x3bb0e8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3bb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3bb0ec:
    // 0x3bb0ec: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3bb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3bb0f0:
    // 0x3bb0f0: 0x40f809  jalr        $v0
label_3bb0f4:
    if (ctx->pc == 0x3BB0F4u) {
        ctx->pc = 0x3BB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0F0u;
        // 0x3bb0f4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB0F8u;
        goto label_3bb0f8;
    }
    ctx->pc = 0x3BB0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB0F8u);
        ctx->pc = 0x3BB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0F0u;
        // 0x3bb0f4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB0F0u, 0x3BB0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB0F8u;
label_3bb0f8:
    // 0x3bb0f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3bb0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bb0fc:
    // 0x3bb0fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3bb0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3bb100:
    // 0x3bb100: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3bb100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bb104:
    // 0x3bb104: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3bb104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bb108:
    // 0x3bb108: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3bb108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bb10c:
    // 0x3bb10c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3bb10cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bb110:
    // 0x3bb110: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3bb110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bb114:
    // 0x3bb114: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3bb114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bb118:
    // 0x3bb118: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3bb118u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bb11c:
    // 0x3bb11c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3bb11cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bb120:
    // 0x3bb120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bb124:
    // 0x3bb124: 0x3e00008  jr          $ra
label_3bb128:
    if (ctx->pc == 0x3BB128u) {
        ctx->pc = 0x3BB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB124u;
        // 0x3bb128: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB12Cu;
        goto label_3bb12c;
    }
    ctx->pc = 0x3BB124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB124u;
        // 0x3bb128: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB12Cu;
label_3bb12c:
    // 0x3bb12c: 0x0  nop
    ctx->pc = 0x3bb12cu;
    // NOP
    ctx->pc = 0x3bb130u;
}
